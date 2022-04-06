""" Problème Rank: 6 Kyu

On vous donne un tableau (liste) strarrde chaînes et un entier k.
Votre tâche consiste à renvoyer la première chaîne la plus longue composée de k chaînes consécutives 
prises dans le tableau.

n étant la longueur du tableau de chaînes, si n = 0 ou k > n ou k <= 0 return ""
"""


def longest_consec(tab, k):
    if (len(tab) < k or k <= 0):
        return ""
    return max_chaine( "".join(tab[:k]), longest_consec(tab[1:], k))

def max_chaine(c1,c2):
    if (len(c2) > len(c1)): return c2
    return c1

