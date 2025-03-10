import html, glob, random, re
from wims_builder import build_generic, build_finalize

class Wims:
    solution_compile_error_message = \
        "Erreur interne: le programme solution ne compile pas:<pre>{err}</pre>Code:<pre>{code}</pre>"
    solution_error_message = \
        "Erreur interne: erreur à l'exécution du programme solution: <pre>{err}</pre>Code:<pre>{code}</pre>"
    answer_compile_error_message = \
        "Le programme ne compile pas:<pre>{err}</pre>"
    failure_message = \
        "Ce n'est pas la réponse attendue."
    failure_hint = \
        "Le programme a affiché:<pre>{answer_out}</pre>Affichage souhaité:<pre>{solution_out}</pre>"

    def build(self, exo):
        # Prepare the messages
        for key in ['solution_compile_error_message',
                    'solution_error_message',
                    'answer_compile_error_message',
                    'failure_message',
                    'name',
                    'typename',
                    'text']:
            exo[key] = getattr(self, key)
        if exo['mode'] == 'training':
            exo['failure_message'] += ' ' + getattr(self, 'failure_hint')

        # Prepare the code
        exo = build_generic(exo)
        exo = self.build_customize(exo)
        exo = build_finalize(exo)

        # Demo mode: button to display source code
        if exo['mode'] == 'demo':
            content = "Fichier source de l'exercice"
            if 'code_file' in exo:
                content += '({})'.format(exo['code_file'])
                # TODO: at this stage we don't have the full path name to implement "Edit online"
                # content += '<a href="https://github.com/PremierLangage/cpp-info111/tree/master/{}">Éditer en ligne</a>'.format(exo['code_file'])
            content += ":<pre>{}</pre>".format(html.escape(exo['code_source']))
            exo['form'] += '{{ hints|component}}'
            exo['hints'] = {
                'selector' : "c-hint",
                'cid' : "hints",
                'label' : "Voir les sources",
                'shouldConfirm' : False,
                'confirmTitle' : 'Voir les sources?',
                'confirmOkTitle': 'Oui',
                'confirmNoTitle': 'Non',
                'items' : [{'content': content}]
            }

        return exo

    def build_customize(self, exo):
        return exo

class WimsOutput(Wims):
    name = "deviner la sortie"
    typename = "Deviner la sortie"
    text = "Lire attentivement le fragment de programme suivant " \
        "et saisir ce que vous prévoyez qu'il affiche. "

    failure_hint = \
        "Le programme a affiché:<pre>{solution_out}</pre>"

    def build_customize(self, exo):
        exo['items'].append({'type':'answer', 'subtype': 'stdout'})
        return exo

class WimsInput(Wims):
    name     = "deviner l'entrée"
    typename = "Deviner l'entrée"
    text     = "Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche {{solution_out}}?"

    failure_hint = \
        "Le programme a affiché:<pre>{solution_out}</pre>"

    def build_customize(self, exo):
        exo['solution_out'] = 42
        exo['items'] = [{'type':'answer', 'subtype': 'stdin', 'content': ''}] + exo['items'] +\
                   [{'type':'solution', 'subtype': 'stdout', 'content': str(exo['solution_out'])}]
        return exo

class WimsResult(WimsOutput):
    name         = "deviner le résultat"
    typename     = "Deviner le résultat"
    failure_hint = "La variable r contient:<pre>{solution_out}</pre>"
    text         = "Exécuter pas à pas le programme suivant. Quelle est la valeur de la variable r à la fin?"

class WimsReturn(WimsOutput):
    name         = "deviner le résultat"
    typename     = "Deviner le résultat"
    failure_hint = "La fonction renvoie:<pre>{solution_out}</pre>"
    text         = "Exécuter pas à pas la fonction suivante. Que renvoie <tt>f({{consts['INPUT']}})</tt>?"

class WimsCode(Wims):
    name     = "code"
    typename = "Compléter un programme"
    text     = "Compléter le programme suivant en suivant les instructions"

class WimsSilentCode(WimsCode):
    name         = "silentcode"
    typename     = "Compléter un programme avec tests"
    text         = "Compléter le programme suivant pour que les tests passent"
    failure_hint = "Erreurs:<pre>{answer_out}</pre>"

builders = {
    "input":      WimsInput,
    "output":     WimsOutput,
    "result":     WimsResult,
    "return":     WimsReturn,
    "code":       WimsCode,
    "silentcode": WimsSilentCode
}

builders_re = re.compile("_(input|output|result|return|code|silentcode)\.")

def build(exo):
    # Pick one of the code files at random
    code_files = glob.glob("*.cpp")
    choice = random.randint(0,len(code_files)-1)
    exo['code_file'] = code_file = code_files[choice]

    # Choose builder, based on the file name.
    match = re.search(builders_re, code_file)
    builder = builders[match.group(1)] if match else WimsOutput

    return builder().build(exo)

