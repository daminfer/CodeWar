# Problème Rank: 8 Kyu

"""

Implement String#digit? (in Java StringUtils.isDigit(String)), 
which should return true if given object is a digit (0-9), false otherwise.

"""

def is_digit(n):
    return n.isdigit() and len(n)==1