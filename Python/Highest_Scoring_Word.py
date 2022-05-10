# Problème Rank: 6 Kyu

"""
Étant donné une chaîne de mots, vous devez trouver le mot ayant le score le plus élevé.

Chaque lettre d'un mot rapporte des points selon sa position dans l'alphabet : a = 1, b = 2, c = 3etc.

Vous devez renvoyer le mot ayant le score le plus élevé sous forme de chaîne.

Si deux mots ont le même score, renvoie le mot qui apparaît le plus tôt dans la chaîne d'origine.

Toutes les lettres seront en minuscules et toutes les entrées seront valides.
"""

def high(x):
    L = x.split()
    scoreF = 0
    score = 0
    pointeur = 0

    for i in range(len(L)):
        for j in range(len(L[i])):
            score = score + (ord(L[i][j]) - 96)
            print("score: ",score)
            print("chaine: ", L[i])
        if score > scoreF:
            pointeur = i
            scoreF = score
        score = 0

    return L[pointeur]
            

print(high('man i need a taxi up to ubud'))