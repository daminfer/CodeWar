# Problème Rank: 7 Kyu

"""
Check to see if a string has the same amount of 'x's and 'o's. 
The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false

"""

def xo(s):
    (x,y) = (0,0)
    for i in s:
        if (i.lower() == 'x'): x = x + 1
        if (i.lower() == 'o'): y = y + 1
    
    if (x == y): return True
    else: return False


print(xo("ooxm"))