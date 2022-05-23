# Problème Rank: 8 Kyu

"""
You will be given a vector of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.

"""

def two_sort(array):
    f = ''
    L = sorted(array)
    for i in L[0]:
        f = f + i + '***'
    return f[0:-3]


def two_sort_1(arr):
    return '***'.join(sorted(arr)[0])

print( two_sort(["bitcoin", "take", "over", "the", "world", "maybe", "who", "knows", "perhaps"]))
