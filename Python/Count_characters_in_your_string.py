# Problème Rank: 6 Kyu

"""
The main idea is to count all the occurring characters in a string. 
If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

What if the string is empty? Then the result should be empty object literal, {}.

"""

def count(string):
    # The function code should be here
    # count('aba') -> {'a': 2, 'b': 1}
    Dico = {}
    for i in string:
        if i in Dico:
            Dico[i] = Dico[i] + 1
        else:
            Dico.update( {i : 1} )
    return Dico

print(count('aba'))