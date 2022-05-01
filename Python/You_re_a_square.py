"""Problème Rank: 7 Kyu

Un carré de carrés
Vous aimez les blocs de construction. 
Vous aimez particulièrement les blocs de construction qui sont des carrés. 
Et ce que vous aimez encore plus, c'est de les disposer en un carré de blocs de construction carrés !

Cependant, parfois, vous ne pouvez pas les disposer dans un carré. 
Au lieu de cela, vous vous retrouvez avec un rectangle ordinaire ! Ces maudites choses ! 
Si vous aviez juste un moyen de savoir si vous travaillez actuellement en vain… Attendez ! 
C'est ça! Il vous suffit de vérifier si votre nombre de blocs de construction est un carré parfait.

Tâche
Étant donné un nombre entier, déterminez si c'est un nombre carré :

En mathématiques, un nombre carré ou carré parfait est un entier qui est le carré d'un entier; 
en d'autres termes, c'est le produit d'un nombre entier avec lui-même.

Les tests utiliseront toujours un certain nombre entier, 
donc ne vous en souciez pas dans les langages typés dynamiques.

Exemples
-1  =>  false
 0  =>  true
 3  =>  false
 4  =>  true
25  =>  true
26  =>  false
"""

def is_square(n):
    if n < 0: return False    
    return float.is_integer(n**(1/2))

print(is_square(0))