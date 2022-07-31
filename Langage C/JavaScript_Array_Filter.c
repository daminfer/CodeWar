/* Problème Rank: 7 Kyu

The solution would work like the following:

getEvenNumbers([2,4,5,6]) // should == [2,4,6]

*/

#include <stddef.h>

//  assign even numbers to preallocated *filtered
//  set pointer *f to length of this return array

void get_even_numbers(size_t a, const int array[a], int *filtered, size_t *f) {

    int j = 0;
    for(int i = 0; i < a; i++)
        if(array[i] % 2 == 0) filtered[j++] = array[i];
    
    *f = j;
}
