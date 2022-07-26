/* Problème Rank: 6 Kyu

Given an array of integers of any length, return an array that has 1 added to the value represented by the array.

the array can't be empty
only non-negative, single digit integers are allowed
Return nil (or your language's equivalent) for invalid inputs.

Examples
For example the array [2, 3, 9] equals 239, adding one would return the array [2, 4, 0].

[4, 3, 2, 5] would return [4, 3, 2, 6]

*/

#include <stdlib.h>

int *up_array(const int *arr, unsigned *count){
    int allNines = 1;
    if(*count == 0) return NULL;
    for(unsigned i=0; i<*count; i++) {
        if(arr[i] < 0 || arr[i] > 9) return NULL;
        if(arr[i] != 9) allNines = 0;
    }
  
    int *result;
    if(allNines) {
        *count += 1;
        result = malloc(*count * sizeof(int));
    
        result[0] = 1;
        for(unsigned i=1; i<*count; i++) result[i] = 0;
    } 

    else {
        result = malloc(*count * sizeof(int));
        int carry = 1;
    
        for(int i=(int)*count-1; i >= 0; i--) {
        const int sum = arr[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
        }
    }
    
    return result;
}