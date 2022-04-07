""" Problème Rank: 6 Kyu
Problème liée a: Tribonacci_Sequence.py

Si vous avez terminé le kata de la séquence Tribonacci, 
vous sauriez maintenant que monsieur Fibonacci a au moins un grand frère.
Si ce n'est pas le cas, jetez-y un coup d'œil rapide pour comprendre comment les choses fonctionnent.

Eh bien, il est temps d'agrandir un peu plus la famille: 
pensez à un Quadribonacci commençant par une signature de 4 éléments 
et chaque élément suivant est la somme des 4 précédents,
un Pentabonacci (enfin Cinquebonacci sonnerait probablement un peu plus italien,
mais ce serait aussi un son vraiment horrible) avec une signature de 5 éléments et
chaque élément suivant est la somme des 5 précédents, et ainsi de suite.

Bien devinez quoi? 
Vous devez créer une fonction Xbonacci qui prend une signature de X éléments - et 
rappelez-vous que chaque élément suivant est la somme des derniers X éléments - et 
renvoie les n premiers éléments de la séquence ainsi ensemencée.

xbonacci {1,1,1,1} 10 = {1,1,1,1,4,7,13,25,49,94}
xbonacci {0,0,0,0,1} 10 = {0,0,0,0,1,1,2,4,8,16}
xbonacci {1,0,0,0,0,0,1} 10 = {1,0,0,0,0,0,1,2,3,6}
xbonacci {1,1} produces the Fibonacci sequence


"""

def Xbonacci(signature,n):
    output, x = signature[:n], len(signature)
    while len(output) < n:
        output.append(sum(output[-x:]))
    return output

print( Xbonacci([0,1],10) )