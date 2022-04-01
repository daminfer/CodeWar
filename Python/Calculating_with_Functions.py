""" Problème Rank: 5kyu
Cette fois, nous voulons écrire des calculs à l'aide de fonctions et obtenir les résultats.
Voyons quelques exemples :

seven(times(five())) # must return 35
four(plus(nine())) # must return 13
eight(minus(three())) # must return 5
six(divided_by(two())) # must return 3
Conditions:

Il doit y avoir une fonction pour chaque nombre de 0 ("zéro") à 9 ("neuf")
Il doit y avoir une fonction pour chacune des opérations mathématiques suivantes : 
plus, moins, fois, divisé_par

Chaque calcul consiste en exactement une opération et deux nombres
La fonction la plus externe représente l'opérande gauche, 
la fonction la plus interne représente l'opérande droit
La division doit être une division entière . Par exemple, cela devrait retourner 2, et non 2.666666...:
eight(divided_by(three()))
"""
# Très jolie solution <3: Paradigme en python Magnifique :)

def zero(f = None): return 0 if not f else f(0)
def one(f = None): return 1 if not f else f(1)
def two(f = None): return 2 if not f else f(2)
def three(f = None): return 3 if not f else f(3)
def four(f = None): return 4 if not f else f(4)
def five(f = None): return 5 if not f else f(5)
def six(f = None): return 6 if not f else f(6)
def seven(f = None): return 7 if not f else f(7)
def eight(f = None): return 8 if not f else f(8)
def nine(f = None): return 9 if not f else f(9)

def plus(y): return lambda x: x+y
def minus(y): return lambda x: x-y
def times(y): return lambda  x: x*y
def divided_by(y): return lambda  x: x//y
