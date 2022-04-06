""" Problème Rank: 6 Kyu

Vous devez renvoyer une chaîne qui ressemble à un losange lorsqu'elle est imprimée à l'écran,
en utilisant des *caractères astérisque ( ).
Les espaces de fin doivent être supprimés 
et chaque ligne doit se terminer par un caractère de nouvelle ligne ( \n).

Renvoie null/nil/None/...si l'entrée est un nombre pair ou négatif,
car il n'est pas possible d'imprimer un diamant de taille paire ou négative.

Exemples:

Un diamant taille 3 :

 *
***
 *

qui apparaîtrait comme une chaîne de" *\n***\n *\n"

Un diamant taille 5 :

  *
 ***
*****
 ***
  *

C'est:"  *\n ***\n*****\n ***\n  *\n"

"""

def diamond(n):
    if n > 0 and n % 2 == 1:
        diamond = ""
        for i in range(n):
            diamond += " " * abs((n//2) - i)
            diamond += "*" * (n - abs((n-1) - 2 * i))
            diamond += "\n"
        return diamond
    else:
        return None

print(diamond(5))
print("  *\n ***\n*****\n ***\n  *\n")
