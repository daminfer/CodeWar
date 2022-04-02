""" Problème Rank: 5 Kyu

Votre travail consiste à écrire une fonction qui incrémente une chaîne,
pour créer une nouvelle chaîne.

Si la chaîne se termine déjà par un nombre, le nombre doit être incrémenté de 1.
Si la chaîne ne se termine pas par un nombre. le numéro 1 doit être ajouté à la nouvelle chaîne.
Exemples:

foo -> foo1

foobar23 -> foobar24

foo0042 -> foo0043

foo9 -> foo10

foo099 -> foo100

Attention: si le nombre comporte des zéros non significatifs,
le nombre de chiffres doit être pris en compte.
"""

from re import X


def increment_string(mot):
    # Cas de Base:
    if mot == "": return "1"
    if not mot[-1].isnumeric():
        return mot + "1"
    # Cas pour n:
    retenue = 0
    for i in range(len(mot) - 1, -1, -1):
        if mot[i].isnumeric():
            if int(mot[i]) < 9:
                mot = mot[:i] + str(int(mot[i]) + 1) + mot[i+1:]
                return mot
            else:
                mot = mot[:i] + '0' + mot[i+1:]
                retenue = 1
        if not mot[i].isnumeric() and retenue == 1:
            mot = mot[:i+1] + '1' + mot[i+1:]
            retenue = 0
        print("boucle{}: {}".format(i,mot))
    return mot
