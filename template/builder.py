import copy, random, re
def code_randomizer():
    r"""

        >>> import random
        >>> random.seed(0)
        >>> randomize_code = code_randomizer()
        >>> randomize_code("int XX=3;")
        'int XX=3;'
        >>> randomize_code("int X=3; int Y=4; int Z=5;")
        'int y=3; int z=4; int x=5;'
        >>> randomize_code("I, J, K, N")
        'k, n, j, i'
        >>> randomize_code("CI1, CI2, CI3")
        '0, 1, 0'
        >>> randomize_code("int X=1;\nint Y=CI2;")
        'int y=1;\nint z=1;'
    """
    d={}
    d['X'],d['Y'],d['Z'] = random.sample('xyz',3)
    d['I'],d['J'],d['K'],d['N'] = random.sample('ijkn',4)
    d['CI1'] = str(random.randint(-2,2))
    d['CI2'] = str(random.randint(-2,2))
    d['CI3'] = str(random.randint(-2,2))
    d['CI4'] = str(random.randint(0,3))
    d['Vlt10'] = (str([random.randint(0,10) for i in range(random.randint(0,3)+4)]).replace("[", "{")).replace("]","}")
    
    #print(d)
    pattern = re.compile(r'\b(' + '|'.join(d.keys()) + r')\b')
    #print(pattern)
    def randomize_code(code):
        return pattern.sub(lambda i: d[i.group()],
                           code)
    return randomize_code

def split_code(code):
    r"""
        Split the code in chunks according to BEGIN / END markers

        >>> code = '''foo code 1
        ... foo code 1b
        ... /// BEGIN A
        ... foo A
        ... foo Ab
        ... /// END A
        ... foo code 2
        ... /// BEGIN B
        ... foo B
        ... /// END B
        ... /// BEGIN C
        ... foo C
        ... /// END C
        ... foo code 3
        ... '''
        >>> split_code(code)                 # doctest: +NORMALIZE_WHITESPACE
        [{'content': 'foo code 1\nfoo code 1b\n', 'type': 'default'},
         {'content': 'foo A\nfoo Ab\n',           'type': 'a'},
         {'content': 'foo code 2\n',              'type': 'default'},
         {'content': 'foo B\n',                   'type': 'b'},
         {'content': 'foo C\n',                   'type': 'c'},
         {'content': 'foo code 3\n',              'type': 'default'}]

    """
    begin_or_end = re.compile(r'\s*/// (BEGIN|END) (\w+)')
    loose_begin_or_end = re.compile('BEGIN|END')
    items = []
    item = {'content': '', 'type': 'default'}
    for line in code.splitlines():
        match = begin_or_end.match(line)
        if match:
            if item['content']:
                items.append(item)
            type = match.group(2).lower()
            if match.group(1) == 'BEGIN':
                item = {'content': '', 'type': type}
            else:
                if type != item['type']:
                    raise ValueError("END `{}` does not match BEGIN `{}`".format(type, item['type']))
                item = {'content': '', 'type': 'default'}
            continue
        assert not loose_begin_or_end.search(line)
        item['content'] += line + "\n"
    if item['content']:
        items.append(item)
    return items

def insert_answer_items(items):
    r"""
    Insert an answer item after each solution item.

        >>> items = [{'type':'default'}, {'type':'solution'}, {'type':'default'}, {'type':'solution'}, {'type':'solution'}]
        >>> insert_answer_items(items)
        [{'type': 'default'},
         {'type': 'solution'}, {'type': 'answer'},
         {'type': 'default'},
         {'type': 'solution'}, {'type': 'answer'},
         {'type': 'solution'}, {'type': 'answer'}]
    """
    res = []
    for item in items:
        res.append(item)
        if item['type'] == 'solution':
            res.append({'type': 'answer'})
    return res

def build_generic(exo):
    r"""
    Generic exercise builder

    This builder is in charge of:

    - making a deep copy of `exo` to make sure the exercise building
      is purely functional and avoid side effects when calling several
      times the same exercise;
    - setting the exercise title;
    - doing some cleanup;
    - fetching the code from exo['code'] or the file exo['code_file']
    - randomizing the code;
    - splitting the code into items of various types according to the
      annotations (default, hidden, solution, answer).

    An additional step is required to set the html input field name
    for each item that is an answer. This can't be done here because
    the exercise builder may later insert answer items in additions to
    those already specified in the code. This is therefore postponed to
    a separate function `build_finalize`.

    The exercise builder should therefore:
    - filter `exo` through `build_generic`
    - do its own magic, modifying `exo` in place if so it wishes
    - filter `exo` through `build_finalize`

        >>> import graderCpp, builder
        >>> exo = build_generic({'code': graderCpp.test_code_generic,
        ...                     'seed': 34,
        ...                     'typename':'foo',
        ...                     'topicname':'bar',
        ...                     'solution_failure_message': ' '
        ...                     })
        >>> exo['title']
        'foo: bar'
        >>> exo['items']
        [{'content': '#include<iostream>\nint main() {\n', 'type': 'hidden'},
         {'content': '     int i;\n', 'type': 'default'},
         {'content': '     i = 42;\n', 'type': 'solution'},
         {'type': 'answer'},
         {'content': '     std::cout << i << std::endl;\n', 'type': 'default'},
         {'content': '}\n', 'type': 'hidden'}]
         >>> len(exo['solution_failure_message'])
         0
    """
    exo = copy.deepcopy(exo)
    # For some reason, empty values in the PL file are stored as strings of length 1
    for key in ['solution_failure_message', 'answer_failure_message']:
        if key in exo:
            exo[key] = exo[key].strip()
    random.seed(exo['seed'])
    exo['title'] = "{typename}: {topicname}".format(typename=exo['typename'], topicname=exo['topicname'])
    code = exo.get('code')
    if code is None:
        with open(exo['code_file']) as f:
            code = f.read()
    code = code_randomizer()(code)
    exo['items'] = insert_answer_items(split_code(code))
    return exo

def build_finalize(exo):
    r"""
    Set the input field name for each item that is an answer.

    .. WARNING:: at this stage the input `exo` is modified in place
    """
    i = 0
    for item in exo['items']:
        if item['type'] == 'answer':
            if i > 0:
                raise NotImplementedError("Only one answer field is supported for now")
            item['key'] = "answer"
            #item['key'] = "answer{}".format(i)
            i += 1
    return exo
