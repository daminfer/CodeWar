"""Problème Rank: 6 Kyu

Étant donné un tableau (arr) comme argument, complétez la fonction countSmileys 
qui doit renvoyer le nombre total de visages souriants.

Règles pour un visage souriant :

Chaque smiley doit contenir une paire d'yeux valide. Les yeux peuvent être marqués comme :ou;
Un visage souriant peut avoir un nez, mais ce n'est pas obligatoire.
Les caractères valides pour un nez sont - ou ~
Chaque visage souriant doit avoir une bouche souriante qui doit être marquée avec ) ou D
Aucun caractère supplémentaire n'est autorisé à l'exception de ceux mentionnés.

Exemples de smileys valides : :) :D ;-D :~)
Smileys non valides : ;( :> :} :]

Exemple:
countSmileys([':)', ';(', ';}', ':-D']);       // should return 2;
countSmileys([';D', ':-(', ':-)', ';~)']);     // should return 3;
countSmileys([';]', ':[', ';*', ':$', ';-D']); // should return 1;
Noter
Dans le cas d'un tableau vide, retournez 0. Vous ne serez pas testé avec une entrée invalide (l'entrée sera toujours un tableau). L'ordre des éléments du visage (yeux, nez, bouche) sera toujours le même.

"""



def count_smileys(arr):
    T = [':D' ,';D' ,':)' ,';)' ,':~)' ,';~)' ,';~D' ,':~D' ,':-)' ,';-)' ,';-D' ,':-D' ]
    compt = 0
    if arr == []: return 0
    for i in arr:
        for j in T:
            if (i == j):
                compt = compt + 1

    return compt

print(count_smileys([':D',':~)',';~D',':)']))
