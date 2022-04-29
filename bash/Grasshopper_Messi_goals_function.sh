#!/bin/bash

#Fonction buts de Messi
#Messi est un footballeur avec des buts dans trois ligues :

#La Ligue
#Coupe du Roi
#Champions
#Complétez la fonction pour renvoyer son nombre total de buts dans les trois ligues.

#Remarque : l'entrée sera toujours valide.

#Par example:

#5, 10, 2  -->  17

laLigaGoals=$1
copaDelReyGoals=$2
championsLeagueGoals=$3
echo $(($laLigaGoals + $copaDelReyGoals +$championsLeagueGoals))