""" Problème Rank: 7 Kyu

Make a program that filters a list of strings and returns a list with only your friends name in it.

If a name has exactly 4 letters in it, you can be sure that it has to be a friend of yours! 
Otherwise, you can be sure he's not...

Ex: Input = ["Ryan", "Kieran", "Jason", "Yous"], Output = ["Ryan", "Yous"]

i.e.

friend ["Ryan", "Kieran", "Mark"] `shouldBe` ["Ryan", "Mark"]
"""

def friend(x):
    tab = []
    for i in x:
        if (len(i) == 4):
            tab = tab + [i]
    
    return tab

def friend_2(x):
    return [f for f in x if len(f) == 4]

print(friend(["Ryan", "Kieran", "Mark",]))