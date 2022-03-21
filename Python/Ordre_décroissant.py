def tri_insertion(L):
    N = len(L)
    for n in range(1,N):
        cle = int(L[n])
        j = n-1
        while j>=0 and int(L[j]) > cle:
            L[j+1] = int(L[j]) # decalage
            j = j-1
        L[j+1] = cle
    return L

def descending_order(num):
    x = 0
    L = tri_insertion(list(str(num)))
    for i in range(len(L)-1,-1,-1):
        x = x + (L[i]*(10**i))
    return x
        
    
# Correction:

def Descending_Order_1(num):
    """On utilise la méthode du type str "join()" pour ajouter une liste trié de str, avec le reverse = True on inverse toute la liste..."""
    return int("".join(sorted(str(num), reverse=True)))
