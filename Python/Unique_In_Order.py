# Problème Rank: 6 Kyu

"""
Implement the function unique_in_order which takes as argument a sequence and returns a list of items 
without any elements with the same value next to each other and preserving the original order of elements.

For example:

unique_in_order('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
unique_in_order('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
unique_in_order([1,2,2,3,3])       == [1,2,3]
"""

def unique_in_order(iterable):
    F = []
    if iterable == "" or iterable == []: return []
    for i in range(len(iterable) - 1):
        if (iterable[i] == iterable[i+1]):
            print(iterable[i])
            pass
        else:
            F = F + [iterable[i]]
    
    F = F + [iterable[-1]]
    return F

def unique_in_order_2(iterable):
    res = []
    for item in iterable:
        if len(res) == 0 or item != res[-1]:
            res.append(item)
    return res

print(unique_in_order(''))