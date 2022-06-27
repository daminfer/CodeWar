# Problème Rank: 7 Kyu

"""
En mathématiques, la factorielle d'un entier non négatif n, noté n!, 
est le produit de tous les entiers positifs inférieurs ou égaux à n. 
Par exemple : 5 ! = 5 * 4 * 3 * 2 * 1 = 120. Par convention la valeur de 0 ! est 1.

Écrivez une fonction pour calculer la factorielle pour une entrée donnée. 
Si l'entrée est inférieure à 0 ou supérieure à 12, 
lancez une exception de type ArgumentOutOfRangeException(C#) ou IllegalArgumentException(Java) 
ou RangeException(PHP) ou lancez un RangeError(JavaScript) ou ValueError(Python) ou un retour -1(C).

Plus de détails sur la factorielle peuvent être trouvés ici .

"""

def factorial(n):
    if n>12 or n<0:
        raise ValueError
    if n==0:
        return 1
    return n*factorial(n-1)