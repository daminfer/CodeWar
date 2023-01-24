/* Problème Rank: 7 Kyu 

Write a function that can return the smallest value of an array or the index of that value. 
The function's 2nd parameter will tell whether it should return the value or the index.

Assume the first parameter will always be an array filled with at least 1 number and no duplicates. 
Assume the second parameter will be a string holding one of two values: 'value' and 'index'.

min([1,2,3,4,5], 'value') // => 1
min([1,2,3,4,5], 'index') // => 0

*/

#include <stdlib.h>
#include <string.h>

int find_smallest(const int numbers[], size_t length, const char *mode) {
    int min_index = 0;
    for (size_t i = 0; i < length; i++) {
        if (numbers[i] < numbers[min_index])
            min_index = i;
    }
    
    return strcmp(mode, "value") == 0 ? numbers[min_index] : min_index;
}