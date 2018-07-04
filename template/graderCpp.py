import io, json, os
import plutils

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

        >>> graderCpp.compile_and_run('#include<iostream>\n int main() { std::cout << "coucou" << std::endl;}') == {'compile_err': 0, 'compile_std_err': '', 'compile_std_out': '', 'err': 0, 'std_err': '', 'std_out': 'coucou\n'}
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
        >>> code = '#include<iostream>\n int main() { std::cout << "coucou" << std::endl;}'
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
        >>> code = '''#include<iostream>
        ... int main() {
        ...     int i;
        ...     std::cin >> i;
        ...     std::cout << i+1 << std::endl;
        ... }
        ... '''
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


def grade(grader):
    exo = plutils.getpldic()
    response = grader(exo)
    print(json.dumps(response))
