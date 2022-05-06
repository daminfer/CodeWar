#!/bin/bash

# Problème Rank: 6 Kyu

# Étant donné deux tableaux aet bécrivez une fonction comp(a, b)(ou compSame(a, b)) 
# qui vérifie si les deux tableaux ont les "mêmes" éléments, 
# avec les mêmes multiplicités (la multiplicité d'un membre est le nombre de fois où il apparaît). 
# "Same" signifie, ici, que les éléments de bsont les éléments de acarré, quel que soit l'ordre.


comp() {
    [ "`echo $1"^2" | sed "s/ /\^2\n/g" | bc | sort -n`" = "`echo $2 | tr ' ' '\n' | sort -n`" ] && echo true || echo false
}
comp "121 144 19 161 19 144 19 11" "231 14641 20736 361 25921 361 20736 361"