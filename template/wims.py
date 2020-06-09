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
            exo[key] = self.getattr(key)
        if exo['mode'] == 'training':
            exo['failure_message'] += ' ' + exo['failure_int']

        # Prepare the code
        exo = build_generic(exo)
        exo = self.build_customize_items(exo)
        exo = build_finalize(exo)

        return exo

    def build_customize(self, exo):
        return exo

class WimsOutput(Wims):
    name = "deviner la sortie"
    typename = "Deviner la sortie"
    text = "Lire attentivement le fragment de programme suivant" \
        "et saisir ce que vous prévoyez qu'il affiche. " \
        "Attention, des boggues peuvent avoir été glissés dans le code."

    failure_hint = \
        "Le programme a affiché:<pre>{solution_out}</pre>"

    def build_customize(exo):
        exo['items'].append({'type':'answer', 'subtype': 'stdout'})
        return exo

class WimsInput(Wims):
    name     = "deviner l'entrée"
    typename = "Deviner l'entrée"
    text     = "Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche {{solution_out}}?"

    failure_hint = \
        "Le programme a affiché:<pre>{solution_out}</pre>"

    def build_customize(exo):
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

builders = {
    "input":  WimsInput,
    "output": WimsOutput,
    "result": WimsResult,
    "return": WimsReturn,
    "code":   WimsCode,
}


