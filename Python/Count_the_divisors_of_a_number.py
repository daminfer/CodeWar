# Problème Rank: 7 Kyu

"""
Count the number of divisors of a positive integer n.

Random tests go up to n = 500000.

Examples (input --> output)
4 --> 3 (1, 2, 4)
5 --> 2 (1, 5)
12 --> 6 (1, 2, 3, 4, 6, 12)
30 --> 8 (1, 2, 3, 5, 6, 10, 15, 30)

"""

def divisors(n):
    acc = 0
    for i in range(1,n+1):
        if ((n % i) == 0):
            acc = acc + 1
    return acc
