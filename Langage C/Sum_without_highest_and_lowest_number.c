/* Problème Rank: 8 Kyu

Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element 
(by value, not by index!).

The highest or lowest element respectively is a single element at each edge, 
even if there are more than one with the same value.
Mind the input validation.

Example:

{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6

Input validation:
If an empty value ( null, None, Nothing etc. ) is given instead of an array, 
or the given array is an empty list or a list with only 1 element, return 0.
*/

#include <stdio.h>
#include <limits.h>

int sum(int* numbers, int numbersCount){

    // Initialisation:
    int valmin = INT_MAX;
    int valmax = INT_MIN;
    int Finale = 0;

    // Cas de Base:
    if (numbersCount <= 1){ return 0;}

    // Parcour Liste:
    for (int i = 0; i < numbersCount; i++){
        if (valmin >= numbers[i]){ valmin = numbers[i];}
        if (valmax <= numbers[i]){ valmax = numbers[i];}
        Finale = Finale + numbers[i];
    }
    
    Finale = Finale - valmax - valmin;
    return Finale;
}

int main(){
    int array1[] = {6};
    printf("%d", sum(array1, 1));
}