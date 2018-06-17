import random, re
def code_randomizer():
    r"""

        >>> import random
        >>> random.seed(0)
        >>> import build
        >>> randomize_code = code_randomizer()
        >>> randomize_code("int XX=3;")
        'int XX=3;'
        >>> randomize_code("int X=3; int Y=4; int Z=5;")
        'int Y=3; int Z=4; int X=5;'
        >>> randomize_code("I, J, K, N")
        'K, N, J, I'
        >>> randomize_code("CI1, CI2, CI3")
        '0, 1, 0'
        >>> randomize_code("int X=1;\nint Y=CI2;")
        'int Y=1;\nint Z=1;'
    """
    d={}
    d['X'],d['Y'],d['Z'] = random.sample('XYZ',3)
    d['I'],d['J'],d['K'],d['N'] = random.sample('IJKN',4)
    d['CI1'] = str(random.randint(-2,2))
    d['CI2'] = str(random.randint(-2,2))
    d['CI3'] = str(random.randint(-2,2))
    #print(d)
    pattern = re.compile(r'\b(' + '|'.join(d.keys()) + r')\b')
    #print(pattern)
    def randomize_code(code):
        return pattern.sub(lambda i: d[i.group()],
                           code)
    return randomize_code
