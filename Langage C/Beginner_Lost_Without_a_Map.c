/* Problème Rank: 8 Kyu

Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]

*/

#include <stddef.h>
#include <stdlib.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size);

int *maps(const int *arr, size_t size){

    // Initialisation:
    int *new = (int *) malloc(size * sizeof(int));
    
    // Parcours:
    for (int i = 0; i < size; i++){ new[i] = arr[i] * 2;}
    return new;
}
