import random, re
def code_randomizer():
    d={}
    d['X'],d['Y'],d['Z'] = random.sample('XYZ',3)
    d['I'],d['J'],d['K'],d['N'] = random.sample('IJKN',4)
    d['CI1'] = str(random.randint(-2,2))
    d['CI2'] = str(random.randint(-2,2))
    d['CI3'] = str(random.randint(-2,2))
    def randomize_code(code):
        return re.sub(r'\b' + '|'.join(d.keys()) + r'\b',
                     lambda i: d[i.group()],
                     code)
    return randomize_code
