# Problème Rank: 7 Kyu

"""
Complete the function that accepts a string parameter, and reverses each word in the string. 
All spaces in the string should be retained.

------------------------------------------------------------------------------------------------------------
"""

def reverse_words(str):
    return ' '.join(s[::-1] for s in str.split(' '))

    
reverse_words('The quick brown fox jumps over the lazy dog.')
