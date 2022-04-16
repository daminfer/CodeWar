/* Problème Rank: 8 Kyu

Vous obtenez un tableau de nombres, renvoyez la somme de tous les nombres positifs.

Exemple [1,-4,7,12]=>1 + 7 + 12 = 20

Remarque : s'il n'y a rien à additionner, la somme est par défaut 0.

*/

#include <stddef.h>
#include <stdio.h>

int positive_sum(const int *values, size_t count){

    // Initialisation:
    int compteur = 0;

    // Parcour Values[]:
    for (int i = 0; i < count; i++){
        if (values[i] >= 0){
            compteur += values[i];
        }
    }
    
    // Retour:
    return compteur;
}

int main(){
    const int values[] = { 1,2,3,4,5 };
    int taille = sizeof(values)/sizeof(values[0]);
    printf( "%d",positive_sum(values, taille));
}