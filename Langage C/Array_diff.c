/* Problème Rank: 6 Kyu

Votre objectif dans ce kata est d'implémenter une fonction de différence,
qui soustrait une liste d'une autre et renvoie le résultat.

Il doit supprimer toutes les valeurs de list a,
qui sont présentes dans list en bconservant leur ordre.

array_diff({1, 2}, 2, {1}, 1, *z) == {2} (z == 1)

Si une valeur est présente dans b, toutes ses occurrences doivent être supprimées de l'autre :

array_diff({1, 2, 2, 2, 3}, 5, {2}, 1, *z) == {1, 3} (z == 2)

REMARQUE : en C, affectez la longueur du tableau de retour au pointeur *z

*/

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

#include <stdlib.h>
#include <stdbool.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {

    int* diffArr = (int*) malloc(n1 * sizeof(size_t));
    
    *z = 0;
        
    for (size_t i = 0; i < n1; i++) {
        bool inArr2 = false;
        
        for (size_t j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                inArr2 = true;
                break;
            }
        }
        
        
        if (!inArr2) {
            diffArr[*z] = arr1[i];
            *z += 1;
        }
    }


    return diffArr;
}