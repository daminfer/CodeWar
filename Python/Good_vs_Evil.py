# Problème Rank: 6 kyu
"""
Worth:
Hobbit : 1
Hommes : 2
Elfes : 3
Nains : 3
Aigles : 4
Assistants : 10

Evil:
Orcs : 1
Hommes : 2
Wargs : 2
Gobelins : 2
Uruk Haï : 3
Trolls : 5
Assistants : 10

La fonction recevra deux paramètres.
Chaque paramètre sera une chaîne de plusieurs entiers séparés par un seul espace.
Chaque chaîne contiendra le décompte de chaque race du côté du bien et du mal.

Le premier paramètre contiendra le décompte de chaque course du côté du bien dans l'ordre suivant:
Hobbits, Hommes, Elfes, Nains, Aigles, Sorciers.

Le deuxième paramètre contiendra le décompte de chaque race du côté du mal dans l'ordre suivant:
Orques, Hommes, Wargs, Gobelins, Uruk Hai, Trolls, Sorciers.

Toutes les valeurs sont des entiers non négatifs.
La somme résultante de la valeur de chaque côté ne dépassera pas la limite d'un entier 32 bits.

"""

# Pour une raison obscure, ce code marche pas :(
def good_vs_evil(good, evil):

    # Tableau de Valeur: positif pour le bien / négatif pour le mal
    Dico = [1,2,3,3,4,10,10,5,3,2,2,2,1]
    # Remplacement des espaces de good/evil:
    good = good.replace(' ', '')
    evil = evil.replace(' ', '')

    x = ""
    Finale = 0
    calcule = 0
    for i in range(6):
        calcule = ( Dico[i] * int(good[i])) - (Dico[-i-1] * int(evil[i]) )
        Finale = Finale + calcule
        print("Gentil: Dico->{} * {} - Méchant: Dico->{} * {} => Finale = {}".format(Dico[i], int(good[i]),Dico[-1-i], int(evil[i]), Finale)  )

    Finale = Finale - (Dico[6] * int(evil[-1]))
    print("Finale = Finale - Méchant: Dico->{} * {} => Finale = {}".format(Dico[6], int(evil[-1]), Finale))
    print("Finale = ", Finale)

    if Finale == 0:
        x = "No victor on this battle field"
    elif Finale > 0:
        x = "Good triumphs over Evil"
    else:
        x = "Evil eradicates all trace of Good"
    
    return "Battle Result: " + x

def good_vs_evil_correction(good, evil):
    g = [1, 2, 3, 3, 4, 10]
    e = [1, 2, 2, 2, 3, 5, 10]
    goodList = good.strip().split(" ")
    evilList = evil.strip().split(" ")
    gp = sum(g[en]*i for en, i in enumerate(map(int, goodList)))
    ep = sum(e[en]*i for en, i in enumerate(map(int, evilList)))
    if gp > ep:
        return "Battle Result: Good triumphs over Evil"
    if gp < ep:
        return "Battle Result: Evil eradicates all trace of Good"
    else:
        return "Battle Result: No victor on this battle field"


print(good_vs_evil('5 7 5 4 6 2', '4 6 0 5 2 5 4'))