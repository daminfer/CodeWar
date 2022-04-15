/* Problème Rank: 8 Kyu

Nous avons besoin d'une fonction capable de transformer un nombre en une chaîne.
Quels moyens d'y parvenir connaissez-vous ?
En C, renvoie une chaîne allouée dynamiquement qui sera libérée par la suite de tests.

Exemples:
123 --> "123"
999 --> "999"

*/

#include <stdio.h>
#include <stdlib.h>

char *number_to_string(int number) {

    // Initialisation:
    size_t taille_int = 11;
    char *text = (char*) malloc( taille_int * sizeof(char));

    // Conversion:
    sprintf(text, "%d", number);
    return text;
}

int main(){
    printf("%s",number_to_string(22222222) );
}