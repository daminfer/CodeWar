#!/bin/bash

# Problème Rank: 8 Kyu

# Étant donné trois entiers a ,b,c, renvoie le plus grand nombre obtenu après insertion des opérateurs 
# et parenthèses suivants: +,*,()
# En d'autres termes, essayez chaque combinaison de a,b,c avec [*+()] et renvoyez le maximum obtenu

a=$1
b=$2
c=$3

arr=($((a+b+c)) $((a*b*c)) $((a*(b+c))) $(((a+b)*c)) $((a*b+c)) $((a+b*c)))
result=0

for a in ${arr[*]}
do
  if [ $a -gt $result ]
  then
    result=$a
  fi
done

echo $result