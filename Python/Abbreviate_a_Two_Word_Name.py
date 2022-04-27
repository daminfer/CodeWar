"""Problème Rank: 8 Kyu

Write a function to convert a name into initials.
This kata strictly takes two words with one space in between them.
The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H
patrick feeney => P.F

"""
def abbrev_name(name):
    Mot = name[0].upper()
    for i in range(0,len(name)):
        if name[i] == ' ':
            Mot = Mot + '.' + name[i+1].upper()

    return Mot

def abbrevName(name):
    return '.'.join(w[0] for w in name.split()).upper()

print(abbrev_name("patrick feeney"))