/* Problème Rank: 8 Kyu

Given an array of integers your solution should find the smallest integer.

For example:

Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345
You can assume, for the purpose of this kata, that the supplied array will not be empty.
*/

#include <stddef.h>
#include <stdio.h>

int find_smallest_int(int *vec, size_t len){
    int acc = 2147483646; 
    for (size_t i = 0; i < len; i++){
        if ( acc > vec[i]){acc = vec[i];}
    }
    
    return acc;
}

int main(){
    printf("%d",find_smallest_int((int[]){34, 15, 88, 2}, 4));
}