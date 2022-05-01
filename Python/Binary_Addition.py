"""Problème Rank: 7 Kyu

Implement a function that adds two numbers together and returns their sum in binary.
The conversion can be done before, or after the addition.

The binary number returned should be a string.

Examples:(Input1, Input2 --> Output (explanation)))

1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)
"""

def add_binary(a,b):
    Val = a + b
    F = ""
    while( (Val/2) != 0):
        F = F + str(Val % 2)
        Val = Val // 2

    F = ''.join(reversed(F))
    return F

def add_binary_2(a,b):
    return bin(a+b)[2:]

def add_binary_3(a,b):
    return '{0:b}'.format(a + b)

print(add_binary(5,9))