""" Problème Rank: 4 Kyu
Étant donné un n x ntableau,
renvoie les éléments du tableau disposés des éléments les plus à l'extérieur vers l'élément du milieu,
en se déplaçant dans le sens des aiguilles d'une montre.

exemple:
array = [[1,2,3],
         [4,5,6],
         [7,8,9]]
snail(array) #=> [1,2,3,6,9,8,7,4,5]

array = [[1,2,3],
         [8,9,4],
         [7,6,5]]
snail(array) #=> [1,2,3,4,5,6,7,8,9]

"""

import numpy as np
# Correction de flemmard, vive python :(
def snail(array):
    m = []
    array = np.array(array)
    while len(array) > 0:
        m += array[0].tolist()
        array = np.rot90(array[1:])
    return m

L = [[1,2,3],[8,9,4],[7,6,5]]
snail(L)