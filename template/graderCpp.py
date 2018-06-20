import io, json, os
import plutils

# Similar to exectojson
def compile_and_run(code, input=""):
    r"""

        >>> import graderCpp
        >>> graderCpp.compile_and_run('it main() {}') == {
        ...    'compile_err': 256,
        ...    'compile_err_out': 'code.cpp:1:1: error: ‘it’ does not name a type; did you mean ‘int’?\n it main() {}\n ^~\n int\n',
        ...    'compile_std_out': ''}
        True

        >>> graderCpp.compile_and_run('int main() {}') == {
        ...     'compile_err': 0,
        ...     'compile_err_out': '',
        ...     'compile_std_out': '',
        ...     'err': 0,
        ...     'err_out': '',
        ...     'std_out': ''}
        True

        >>> graderCpp.compile_and_run('#include<iostream>\n int main() { std::cout << "coucou" << std::endl;}') == {'compile_err': 0, 'compile_err_out': '', 'compile_std_out': '', 'err': 0, 'err_out': '', 'std_out': 'coucou\n'}
        True
    """
    log = {}
    io.open("code.cpp", "w").write(code)
    gcc_cmd = "g++ -Wall -Wno-sign-compare -Wno-unused-value -pedantic -std=c++11 " + "code.cpp -o code"
    log['compile_err'] = os.system(gcc_cmd + "> compilCstdout.log 2> compilCstderr.log ")
    # Get back the standard/error output of compilation
    log['compile_err_out'] = open("compilCstderr.log", "r").read()
    log['compile_std_out'] = open("compilCstdout.log", "r").read()

    if not log['compile_err']:
        io.open("stdin", "w").write(input)
        log['err'] = os.system("./code < stdin 2> stderr.log > stdout.log")
        log['err_out'] = open("stderr.log", "r").read()
        log['std_out'] = open("stdout.log", "r").read()
    return log

def equal_out(a, b):  # Should use plutils.check_output instead
    return a.strip().splitlines() == b.strip().splitlines()

def grader_expected_output(exo, user_solution):
    r"""
        >>> import graderCpp
        >>> code = '#include<iostream>\n int main() { std::cout << "coucou" << std::endl;}'
        >>> graderCpp.grader_expected_output({'code': code }, 'coucou')
        {'success': True, 'feedback': ''}
        >>> graderCpp.grader_expected_output({'code': code }, '\n\ncoucou\n')
        {'success': True, 'feedback': ''}
        >>> graderCpp.grader_expected_output({'code': code }, 'foo')
        {'success': False, 'feedback': 'Le programme a affiché:\ncoucou\n'}
    """
    log = compile_and_run(code=exo['code'], )
    response = { 'success': True, 'feedback':'' }
    if log['compile_err']:
        response['feedback'] = log['compile_err_out']
        return response
    if log['err']:
        response['feedback'] = log['err_out']
        return response
    if not equal_out(log['std_out'], user_solution):
        response['success'] = False
        response['feedback'] = "Le programme a affiché:\n"+log['std_out']
    return response

def grader_input(exo, user_solution):
    r"""
        >>> import graderCpp
        >>> code = '''#include<iostream>
        ... int main() {
        ...     int i;
        ...     std::cin >> i;
        ...     std::cout << i+1 << std::endl;
        ... }
        ... '''
        >>> graderCpp.grader_input({'code': code }, '41')
        {'success': True, 'feedback': ''}
        >>> graderCpp.grader_input({'code': code }, '42')
        {'success': False, 'feedback': 'Le programme a affiché:\n43\n'}
    """
    log = compile_and_run(code=exo['code'], input=user_solution)
    response = { 'success': True, 'feedback':'' }
    if log['compile_err']:
        response['feedback'] = log['compile_err_out']
        return response
    if log['err']:
        response['feedback'] = log['err_out']
        return response
    if not equal_out(log['std_out'], "42"):
        response['success'] = False
        response['feedback'] = "Le programme a affiché:\n"+log['std_out']
    return response


def grade(grader):
    exo = plutils.getpldic()
    try:
        user_solution = io.open("student.py").read()
    except FileNotFoundError:
        user_solution = "" # Temporary work around: student.py does not get created if the input is empty
    response = grader(exo,user_solution)
    print(json.dumps(response))
