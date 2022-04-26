""" Problème Rank: 7 Kyu

Given the triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...

Calculate the sum of the numbers in the nth row of this triangle (starting at index 1): (Input --> Output)

1 -->  1
2 --> 3 + 5 = 8
"""

def row_sum_odd_numbers(n):
    som = 0
    mid = n**2
    for i in range(mid - n, mid + n):
        if (i % 2 != 0):
            som = som + i
    return som

def row_sum_odd_numbers_correction(n):
    #your code here
    return n ** 3

print(row_sum_odd_numbers(13))

