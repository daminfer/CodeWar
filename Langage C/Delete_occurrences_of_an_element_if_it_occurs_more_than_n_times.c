/* Problème Rank: 6 Kyu

Tâche:
Étant donné une liste et un nombre, créez une nouvelle liste qui contient chaque nombre de lst au plus N fois
sans réorganiser. 
Par exemple, si le numéro d'entrée est 2 et que la liste d'entrée est [1,2,3,1,2,1,2,3], 
vous prenez [1,2,3,1,2], déposez le [ 1,2] puisque cela conduirait à 1 et 2 dans le résultat 3 fois, 
puis prendrait 3, ce qui mène à [1,2,3,1,2,3]. 
Avec la liste [20,37,20,21] et le numéro 1, le résultat serait [20,37,21].

Pour C :
Attribuez la longueur du tableau de retour au paramètre pointeur *szout.
Ne pas muter le tableau d'entrée.
*/

#include <stddef.h>
#include <limits.h>

//  return a dynamically allocated int array
//  the return array will be freed by tester
//  set *szout to the length of output array

int* delete_nth(size_t szin, int order[szin], int max_e, size_t *szout) {

    unsigned char* fv = (unsigned char*) calloc(INT_MAX, sizeof(unsigned char));
    int* ret = (int*) malloc(szin * sizeof(int));
    *szout = 0;

    for(int i = 0; i < szin; i++) {
        if(++fv[order[i]] <= max_e) {
            ret[*szout] = order[i];
            *szout = *szout + 1;
        }
    }

    ret = realloc(ret, *szout * sizeof(int));
    free(fv);
    return ret;
}