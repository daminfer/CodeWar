# Problème Rank: 8 Kyu

"""
Numbers ending with zeros are boring.

They might be fun in your world, but not here.

Get rid of them. Only the ending ones.

1450 -> 145
960000 -> 96
1050 -> 105
-1050 -> -105

Zero alone is fine, don't worry about it. Poor guy anyway

"""

def no_boring_zeros(n):
    
    if str(n)[-1] == "0" and n != 0:
        return no_boring_zeros( int(str(n)[:-1]) )
    else:
        return n

def no_boring_zeros_corr(n):
    try:
        return int(str(n).rstrip('0'))
    except ValueError:
        return 0

def no_boring_zeros_corr(n):
    if n==0:
        return n
    while n%10==0:
        n=n/10
    return n

