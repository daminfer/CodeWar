def in_array(array1, array2):
    r = []
    for s1 in array1 :
        for s2 in array2 :
            if s1 in s2 and s1 not in r :
                r.append(s1)
                break
    r.sort()
    return r