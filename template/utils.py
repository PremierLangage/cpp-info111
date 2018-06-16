import random, re
def code_randomiser():
    d={}
    d['X'],d['Y'],d['Z'] = random.sample('XYZ',3)
    d['I'],d['J'],d['K'],d['N'] = random.sample('IJKN',4)
    def randomize_code(code):
        return re.sub('|'.join(d.keys()), lambda i: d[i.group()], code)
    return randomize_code()
