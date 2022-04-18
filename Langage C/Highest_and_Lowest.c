/* Problème Rank: 7 kyu

Dans ce petit devoir, on vous donne une chaîne de nombres séparés par des espaces et
vous devez renvoyer le nombre le plus élevé et le plus bas.

Exemples:

high_and_low("1 2 3 4 5")  // return "5 1"
high_and_low("1 2 -3 4 5") // return "5 -3"
high_and_low("1 9 3 4 -5") // return "9 -5"
high_and_low("1 2 3 4 5", result)  // result "5 1"
high_and_low("1 2 -3 4 5", result) // result "5 -3"
high_and_low("1 9 3 4 -5", result) // result "9 -5"

Remarques:

Tous les numéros sont valides Int32, pas besoin de les valider.
Il y aura toujours au moins un nombre dans la chaîne d'entrée.
La chaîne de sortie doit être composée de deux nombres séparés par un seul espace, 
et le nombre le plus élevé est le premier.
*/

#include <stdio.h>
#include <stdlib.h>


void high_and_low (const char *strnum, char *result){
    int min, max;
    min = max = atoi(strnum);
    for (int i = 0; strnum[i]; i++){
        int tmp;
        if (strnum[i] == ' '){
            tmp = atoi(strnum + i);
            if (tmp < min)
                min = tmp;
            if (tmp > max)
                max = tmp;
        }
    }
    sprintf(result, "%d %d", max, min); // print your answer to result
}

int main(){
    char result[128];
    high_and_low("8 3 -5 42 -1 0 0 -9 4 7 4 -4", result);
    printf("result: %s", result);
}