# Problème Rank: 8 Kyu

"""
Write a function to split a string and convert it into an array of words.

Examples (Input -> Output):
* "Robin Singh" ==> ["Robin", "Singh"]

* "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
"""

def string_to_array(s):
    TAB = ""
    F = []
    for i in s:
        if ( i == ' '):
            F = F + [TAB]
            TAB = ""
        else:
            TAB = TAB + i
    
    F = F + [TAB]
    return F

print(string_to_array("Robin Singh"))