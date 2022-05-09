#Problème Rank: 8 Kyu

"""
Votre tâche consiste à créer la fonction isDivideBy(ou is_divide_by) pour vérifier 
si un entier number est divisible à la fois par des entiers a et b.

Quelques cas :

(-12, 2, -6)  ->  true
(-12, 2, -5)  ->  false

(45, 1, 6)    ->  false
(45, 5, 15)   ->  true

(4, 1, 4)     ->  true
(15, -5, 3)   ->  true

"""

def is_divide_by(number, a, b):
    if (number % a == 0 and number % b == 0): return True
    else: return False



print(is_divide_by(-12, 2, -5))