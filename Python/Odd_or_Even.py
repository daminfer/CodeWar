# Problème Rank: 7 Kyu

"""
Tâche:
Étant donné une liste d'entiers, déterminer si la somme de ses éléments est paire ou impaire.

Donnez votre réponse sous forme de chaîne correspondant "odd" à ou "even".

Si le tableau d'entrée est vide, considérez-le comme : [0](tableau avec un zéro).

Exemples:
Input: [0]
Output: "even"

Input: [0, 1, 4]
Output: "odd"

Input: [0, -1, -5]
Output: "even"
"""

def odd_or_even(arr):
    somme = arr[0]
    for i in range(1, len(arr)):
        somme = somme + arr[i]
    if (somme % 2 == 0): return "even"
    else: return "odd"

print(odd_or_even([0, 1, 4]))