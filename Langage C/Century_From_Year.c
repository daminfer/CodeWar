/* Problème Rank: 8 Kyu

Introduction:
Le premier siècle s'étend de l' an 1 jusqu'à l'an 100 inclus, 
le deuxième siècle - de l'an 101 jusqu'à l'an 200 inclus , etc.

Tâche:
Étant donné une année, renvoie le siècle dans lequel elle se trouve.

Exemples:

1705 --> 18
1900 --> 19
1601 --> 17
2000 --> 20
*/

#include <stdio.h>

int centuryFromYear(int year) {
    if (year % 100 >= 1){
        return (year/100) + 1;
    }
    else{
        return year/100;
    }
}

int main(){
    printf("%d",centuryFromYear(1705));
}