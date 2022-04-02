"""Problème Rank: 5 Kyu
Écrivez une fonction nommée first_non_repeating_letterqui prend une entrée de chaîne et
renvoie le premier caractère qui n'est répété nulle part dans la chaîne.

Par exemple, si l'entrée est donnée 'stress', la fonction doit renvoyer 't',
car la lettre t n'apparaît qu'une seule fois dans la chaîne et apparaît en premier dans la chaîne.

Comme défi supplémentaire, les lettres majuscules et minuscules sont considérées comme le même caractère,
mais la fonction doit renvoyer la casse correcte pour la lettre initiale.
Par exemple, l'entrée 'sTreSS'doit renvoyer 'T'.

Si une chaîne contient tous les caractères répétés,
elle doit renvoyer une chaîne vide ( "") ou None-- voir les exemples de tests.

"""

# Beaucoup trop simple en python XD
def first_non_repeating_letter(mot):
    Test = mot.lower()
    for i in range(len(Test)):
        if Test.count(Test[i]) == 1:
            return mot[i]
    return ""

print(first_non_repeating_letter("Test"))