""" Problème Rank: 8 Kyu

Build a function that returns an array of integers from n to 1 where n>0.
Example : n=5 --> [5,4,3,2,1]

"""

def reverse_seq(n):
    Tab = []
    for i in range(n ,0 ,-1):
        Tab.append(i)
        print(i)
    print(Tab)
    return Tab

reverse_seq(5)