# Problème Rank: 8 Kyu

"""
Write a function that returns a string in which firstname is swapped with last name.

Example(Input --> Output)

"john McClane" --> "McClane john"
"""

def name_shuffler(str_):
    L = str_.split(' ')
    temp = L[0]
    L[0] = L[-1]
    L[-1] = temp
    return ' '.join(L)

print(name_shuffler('john McClane'))