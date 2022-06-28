# Problème Rank: 8 Kyu

"""
Given an array of integers.

Return an array, where the first element is the count of positives numbers 
and the second element is sum of negative numbers.
0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.

Example:

For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

"""

def count_positives_sum_negatives(arr):
    (x,y) = (0,0)
    if arr == []: return []
    for i in arr:
        if i > 0:
            x = x + 1 
        elif i < 0:
            y = y + i
        else:
            pass
    if (x,y) == (0,0): return [0,0]
    return [x,y]

def count_positives_sum_negatives_2(arr):
    return [sum(n > 0 for n in arr), sum(n for n in arr if n < 0)] if arr else []