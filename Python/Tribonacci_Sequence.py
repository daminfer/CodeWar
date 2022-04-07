""" Problème Rank: 6 Kyu

Problème liée a: Fibonacci_Tribonacci_and_friends.py
Bien rencontré le grand frère de Fibonacci, AKA Tribonacci.

Comme son nom l'indique peut-être déjà,
cela fonctionne essentiellement comme un Fibonacci,
mais en additionnant les 3 derniers (au lieu de 2) nombres de la séquence pour générer le suivant.
Et, pire encore, je n'entendrai malheureusement pas de locuteurs italiens non natifs essayer de le prononcer :(

Donc, si nous devons commencer notre séquence Tribonacci avec [1, 1, 1]
comme entrée de départ (AKA signature ), nous avons cette séquence :

[1, 1 ,1, 3, 5, 9, 17, 31, ...]

Et si on commençait par [0, 0, 1]comme signature? 
Comme commencer par [0, 1]au lieu de décaler[1, 1] fondamentalement la suite de Fibonacci commune d'une place,
vous pourriez être tenté de penser que nous obtiendrions la même suite décalée de 2 places,
mais ce n'est pas le cas et nous aurions :

[0, 0, 1, 1, 2, 4, 7, 13, 24, ...]
Eh bien, vous l'avez peut-être déjà deviné, mais pour être clair: 
vous devez créer une fonction Fibonacci qui, étant donné un tableau/une liste de signatures,
renvoie les n premiers éléments - signature incluse de la séquence ainsi ensemencée.

La signature contiendra toujours 3 chiffres ; n sera toujours un nombre non négatif; 
if n == 0, alors retourne un tableau vide (sauf en C return NULL) 
et sois prêt pour tout ce qui n'est pas clairement spécifié ;)

Si vous avez aimé ce kata, une version plus avancée et 
généralisée de celui-ci peut être trouvée dans le kata Xbonacci

[Remerciements personnels au professeur Jim Fowler sur Coursera pour ses cours géniaux que
je recommande vraiment à tout passionné de mathématiques
et pour m'avoir montré cette curiosité mathématique aussi avec sa passion contagieuse habituelle :)]

"""

def tribonacci(signature,n):
    if ( n == 0): return []

    if (n <= 3): return signature[:n]

    for i in range(n - 3):
        signature.append(signature[i]+ signature[i+1] + signature[i+2]) 
    return signature
    
def Fibonacci(n):
    if (n <= 1):
        return n
    else:
        return (Fibonacci(n-1) + Fibonacci(n-2))
