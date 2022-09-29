# Problème Rank: 7 Kyu

"""

Given a string made up of letters a, b, and/or c, switch the position of letters a and b 
(change a to b and vice versa). Leave any incidence of c untouched.

Example:

'acb' --> 'bca'
'aabacbaa' --> 'bbabcabb'

"""

def switcheroo(s):
    new = ""
    for i in s:
        if i == "a": new = new + "b"
        elif i == "b": new = new + "a"
        else:
            new = new + i
    return new