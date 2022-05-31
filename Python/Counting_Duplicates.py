# Problème Rank: 6 Kyu

"""
Count the number of Duplicates
Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

Example
"abcde" -> 0 # no characters repeats more than once
"aabbcde" -> 2 # 'a' and 'b'
"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
"indivisibility" -> 1 # 'i' occurs six times
"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
"aA11" -> 2 # 'a' and '1'
"ABBA" -> 2 # 'A' and 'B' each occur twice
"""

def occ(n,text):
    val = 0
    for i in text:
        if n.lower() == i.lower():
            val = val + 1
    return val

def duplicate_count(text):
    TAB = []
    acc = 0
    for i in range(len(text)):
        if occ(text[i], text) > 1 and not (text[i].lower() in TAB):
            TAB.append(text[i].lower())
            acc = acc + 1
    return acc

def duplicate_count_2(s):
  return len([c for c in set(s.lower()) if s.lower().count(c)>1])