import io, json, os
import plutils

test_code_coucou='''
#include<iostream>
int main() {
     std::cout << "coucou" << std::endl;
}
'''

test_code_input='''
#include<iostream>
int main() {
     int i;
     std::cin >> i;
     i = i + 1;
     std::cout << i << std::endl;
}
'''

test_code_generic='''/// BEGIN HIDDEN
#include<iostream>
int main() {
/// END HIDDEN
     int i;
     /// BEGIN SOLUTION
     i = 42;
     /// END SOLUTION
     std::cout << i << std::endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
'''

# Similar to exectojson
def compile_and_run(code, input=""):
    r"""

        >>> import graderCpp
        >>> graderCpp.compile_and_run('it main() {}') == {
        ...    'compile_err': 256,
        ...    'compile_std_err': 'code.cpp:1:1: error: ‘it’ does not name a type; did you mean ‘int’?\n it main() {}\n ^~\n int\n',
        ...    'compile_std_out': ''}
        True

        >>> graderCpp.compile_and_run('int main() {}') == {
        ...     'compile_err': 0,
        ...     'compile_std_err': '',
        ...     'compile_std_out': '',
        ...     'err': 0,
        ...     'std_err': '',
        ...     'std_out': ''}
        True

        >>> graderCpp.compile_and_run(graderCpp.test_code_coucou) == {'compile_err': 0, 'compile_std_err': '', 'compile_std_out': '', 'err': 0, 'std_err': '', 'std_out': 'coucou\n'}
        True
    """
    log = {}
    io.open("code.cpp", "w").write(code)
    gcc_cmd = "g++ -Wall -Wno-sign-compare -Wno-unused-value -pedantic -std=c++11 " + "code.cpp -o code"
    log['compile_err'] = os.system(gcc_cmd + "> compilCstdout.log 2> compilCstderr.log ")
    # Get back the standard/error output of compilation
    log['compile_std_err'] = open("compilCstderr.log", "r").read()
    log['compile_std_out'] = open("compilCstdout.log", "r").read()

    if not log['compile_err']:
        io.open("stdin", "w").write(input)
        log['err'] = os.system("./code < stdin 2> stderr.log > stdout.log")
        log['std_err'] = open("stderr.log", "r").read()
        log['std_out'] = open("stdout.log", "r").read()
    return log

def equal_out(a, b):  # Should use plutils.check_output instead
    return a.strip().splitlines() == b.strip().splitlines()

def grader_expected_output(exo):
    r"""
        >>> import graderCpp
        >>> code = graderCpp.test_code_coucou
        >>> graderCpp.grader_expected_output({'code': code,
        ...                                   'response': {'answer': 'coucou'}})
        {'success': True, 'feedback': 'Bonne réponse'}
        >>> graderCpp.grader_expected_output({'code': code,
        ...                                   'response': {'answer': '\n\ncoucou\n'}})
        {'success': True, 'feedback': 'Bonne réponse'}
        >>> graderCpp.grader_expected_output({'code': code,
        ...                                   'response': {'answer': 'foo'}})
        {'success': False, 'feedback': 'Le programme a affiché:\ncoucou\n'}
    """
    answer = exo['response']['answer']
    log = compile_and_run(code=exo['code'], )
    response = { 'success': True, 'feedback':'Bonne réponse' }
    if log['compile_err']:
        response['feedback'] = log['compile_std_err']
        return response
    if log['err']:
        response['feedback'] = log['std_err']
        return response
    if not equal_out(log['std_out'], answer):
        response['success'] = False
        response['feedback'] = "Le programme a affiché:\n"+log['std_out']
    return response

def grader_input(exo):
    r"""
        >>> import graderCpp
        >>> code = graderCpp.test_code_input
        >>> graderCpp.grader_input({'code': code,
        ...                         'response': {'answer': '41'}})
        {'success': True, 'feedback': 'Bonne réponse'}
        >>> graderCpp.grader_input({'code': code,
        ...                         'response': {'answer': '42'}})
        {'success': False, 'feedback': 'Le programme a affiché:\n43\n'}
    """
    answer = exo['response']['answer']
    log = compile_and_run(code=exo['code'], input=answer)
    response = { 'success': True, 'feedback':'Bonne réponse' }
    if log['compile_err']:
        response['feedback'] = log['compile_std_err']
        return response
    if log['err']:
        response['feedback'] = log['std_err']
        return response
    if not equal_out(log['std_out'], "42"):
        response['success'] = False
        response['feedback'] = "Le programme a affiché:\n"+log['std_out']
    return response


def compile_and_run_items(items, variant):
    r"""
        >>> import graderCpp, builder

        >>> items = builder.split_code(graderCpp.test_code_coucou)
        >>> items = items + [{'type': 'answer', 'subtype': 'stdout', 'content':'foo'}]
        >>> compile_and_run_items(items, "answer")
        {'compile_err': 0, 'compile_std_err': '', 'compile_std_out': '', 'err': 0, 'std_err': '', 'std_out': 'foo'}
        >>> compile_and_run_items(items, "solution")
        {'compile_err': 0, 'compile_std_err': '', 'compile_std_out': '', 'err': 0, 'std_err': '', 'std_out': 'coucou\n'}

        >>> items = builder.split_code(graderCpp.test_code_input)
        >>> items = [{'type': 'answer', 'subtype': 'stdin', 'content':'10'}] + items + [{'type': 'solution', 'subtype': 'stdout', 'content':'42'}]
        >>> compile_and_run_items(items, "answer")
        {'compile_err': 0, 'compile_std_err': '', 'compile_std_out': '', 'err': 0, 'std_err': '', 'std_out': '11\n'}
        >>> compile_and_run_items(items, "solution")
        {'compile_err': 0, 'compile_std_err': '', 'compile_std_out': '', 'err': 0, 'std_err': '', 'std_out': '42'}
    """
    code = ""
    stdin = ""
    stdout = None
    for item in items:
        if item['type'] == 'default' or item['type'] == 'hidden':
            code += item['content']
        elif item['type'] == variant:
            subtype = item.get('subtype', 'code')
            if subtype == 'code':
                code += item['content']
            elif subtype == 'stdin':
                stdin = item['content']
            elif subtype == 'stdout':
                assert stdout is None
                stdout = item['content']
    if stdout is not None:
        # In debug mode, we may want to check that the program compiles
        return {
            'compile_err': 0,
            'compile_std_err': '',
            'compile_std_out': '',
            'err': 0,
            'std_err': '',
            'std_out': stdout}
    else:
        return compile_and_run(code, stdin)

def grader_generic(exo):
    r"""
        >>> import graderCpp, builder
        >>> items = builder.split_code(test_code_input)
        >>> items = [{'type': 'answer', 'key': 'in', 'subtype': 'stdin'}] + items + [{'type': 'solution',  'subtype': 'stdout', 'content':'42'}]

        >>> exo = {'items': items, 'response': {'in': '41'} }
        >>> graderCpp.grader_generic(exo)
        {'success': True, 'feedback': 'Bonne réponse'}

        >>> exo = {'items': items, 'response': {'in': '42'} }
        >>> graderCpp.grader_generic(exo)
        {'success': False, 'feedback': 'Le programme a affiché:<hr>43\n<hr>Attendu:<hr>42<hr>'}

        >>> items = builder.split_code(test_code_generic)
        >>> items[3:3] = [{'type': 'answer', 'subtype':'code', 'key': 'in'}]
        >>> items
        [{'content': '#include<iostream>\nint main() {\n', 'type': 'hidden'},
         {'content': '     int i;\n', 'type': 'default'},
         {'content': '     i = 42;\n', 'type': 'solution'},
         {'type': 'answer', 'subtype': 'code', 'key': 'in'},
         {'content': '     std::cout << i << std::endl;\n', 'type': 'default'},
         {'content': '}\n', 'type': 'hidden'}]

        >>> exo = {'items': items, 'response': {'in': '    i = 42;'} }
        >>> graderCpp.grader_generic(exo)
        {'success': True, 'feedback': 'Bonne réponse'}

        >>> exo = {'items': items, 'response': {'in': '    i = 41;'} }
        >>> graderCpp.grader_generic(exo)
        {'success': False, 'feedback': 'Le programme a affiché:<hr>41\n<hr>Attendu:<hr>42\n<hr>'}

        >>> exo = {'items': items, 'response': {'in': '    i = 41'} }
        >>> graderCpp.grader_generic(exo)
        {'success': False, 'feedback': 'code.cpp: In function ‘int main()’:\ncode.cpp:4:16: error: expected ‘;’ before ‘std’\n     i = 41     std::cout << i << std::endl;\n                ^~~\n'}
    """
    items = exo['items']
    response = exo['response']

    for item in items:
        if item['type'] == 'answer':
            # item['content'] = response[item['key']]
            item['content'] = response['answer']

    log_solution = compile_and_run_items(items, variant="solution")
    log_answer   = compile_and_run_items(items, variant="answer")
    response = { 'success': True, 'feedback':'Bonne réponse' }

    # The solution program should compile and run without error
    if log_solution['compile_err']:
        response['feedback'] = log_solution['compile_std_err']
        return response
    if log_solution['err']:
        response['feedback'] = log_solution['std_err']
        return response

    # Report failure if the answer program does not compile
    if log_answer['compile_err']:
        response['success'] = False
        response['feedback'] = log_answer['compile_std_err']
        return response

    # Report failure if the two outputs do not match
    if not equal_out(log_answer['std_out'], log_solution['std_out']):
        response['success'] = False
        response['feedback'] = "Le programme a affiché:<hr>{}<hr>Attendu:<hr>{}<hr>".format(log_answer['std_out'], log_solution['std_out'])
    return response


def grade(grader):
    exo = plutils.getpldic()
    response = grader(exo)
    print(json.dumps(response))
