import os
import io
import plutils

# Similar to exectojson
def compile_and_run(code, input=""):
    r"""

        >>> import grader
        >>> grader.compile_and_run('it main() {}') == {
        ...    'compile_err': 256,
        ...    'compile_err_out': 'code.cpp:1:1: error: ‘it’ does not name a type; did you mean ‘int’?\n it main() {}\n ^~\n int\n',
        ...    'compile_std_out': ''}
        True

        >>> grader.compile_and_run('int main() {}') == {
        ...     'compile_err': 0,
        ...     'compile_err_out': '',
        ...     'compile_std_out': '',
        ...     'err': 0,
        ...     'err_out': '',
        ...     'std_out': ''}
        True

        >>> grader.compile_and_run('#include<iostream>\n int main() { std::cout << "coucou" << std::endl;}') == {'compile_err': 0, 'compile_err_out': '', 'compile_std_out': '', 'err': 0, 'err_out': '', 'std_out': 'coucou\n'}
        True
    """
    log = {}
    io.open("code.cpp", "w").write(code)
    gcc_cmd = "g++ -Wall " + "code.cpp -o code"
    log['compile_err'] = os.system(gcc_cmd + "> compilCstdout.log 2> compilCstderr.log ")
    # Get back the standard/error output of compilation
    log['compile_err_out'] = open("compilCstderr.log", "r").read()
    log['compile_std_out'] = open("compilCstdout.log", "r").read()

    if not log['compile_err']:
        io.open("input", "w").write(input)
        log['err'] = os.system("./code 2> stderr.log > stdout.log")
        log['err_out'] = open("stderr.log", "r").read()
        log['std_out'] = open("stdout.log", "r").read()
    return log

def equal_out(a, b):  # Should use plutils.check_output instead
    return a.strip().splitlines() == b.strip().splitlines()

## Write a converter from plain source file to this source file
def grader_expected_output(exo, user_solution):
    r"""
        >>> import grader
        >>> code = '#include<iostream>\n int main() { std::cout << "coucou" << std::endl;}'
        >>> grader.grader_expected_output({'code': code }, 'coucou')
        {'success': True}
        >>> grader.grader_expected_output({'code': code }, '\n\ncoucou\n')
        {'success': True}
        >>> grader.grader_expected_output({'code': code }, 'foo')
        {'success': False, 'feedback': 'Votre réponse:\nfooObtenu:\ncoucou\n'}
    """
    log = compile_and_run(code=exo['code'], )
    response = { 'success': True, 'feedback':'' }
    if log['compile_err']:
        response['feedback'] = log['compile_err_log']
    if log['err']:
        response['feedback'] = log['err_log']
    if not equal_out(log['std_out'], user_solution):
        response['success'] = False
        response['feedback'] = "Le programme a affiché:\n"+log['std_out']
    return response
