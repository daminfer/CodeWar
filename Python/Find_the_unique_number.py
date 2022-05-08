# Problème Rank: 6 Kyu

"""
Il y a un tableau avec quelques nombres. Tous les nombres sont égaux sauf un. 
Essayez de le trouver !

find_uniq([ 1, 1, 1, 2, 1, 1 ]) == 2
find_uniq([ 0, 0, 0.55, 0, 0 ]) == 0.55
Il est garanti que le tableau contient au moins 3 nombres.

Les tests contiennent de très grands tableaux, alors pensez aux performances.
"""


def find_uniq(arr):
    x = arr[0]
    for i in range(1,len(arr)):
        if (x != arr[i]):
            pos = i
    if  x != arr[1] and x != arr[2]:
        print('Cas ou x == TRUE',pos)
        return x
    return arr[pos]

print(find_uniq([ 1, 1, 1, 2, 1, 1 ]), find_uniq([ 0.55, 0, 0, 0, 0 ]))