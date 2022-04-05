""" Problème Rank: 6 Kyu

Un flux de données est reçu et doit être inversé.

Chaque segment a une longueur de 8 bits, ce qui signifie que l'ordre de ces segments doit être inversé,
par exemple :

11111111  00000000  00001111  10101010
 (byte1)   (byte2)   (byte3)   (byte4)

devrait devenir:

10101010  00001111  00000000  11111111
 (byte4)   (byte3)   (byte2)   (byte1)

Le nombre total de bits sera toujours un multiple de 8.

"""

def data_reverse(data):
    val = []
    Finale = []
    for i in range(len(data)-1, -1, -1):
        val = val + [data[i]]
        if i % 8 == 0 and i != len(data):
            val.reverse()
            Finale = Finale + val 
            print("Tab 1: ",Finale)
            val = []
    return Finale 

data_reverse([1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,0,1,0])