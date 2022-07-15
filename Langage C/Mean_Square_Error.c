/* Problème Rank: 5 Kyu

Complete the function that

accepts two integer arrays of equal length
compares the value each member in one array to the corresponding member in the other
squares the absolute value difference between those two values
and returns the average of those squared absolute value difference between each member pair.

Examples:

[1, 2, 3], [4, 5, 6]              -->   9   because (9 + 9 + 9) / 3
[10, 20, 10, 2], [10, 25, 5, -2]  -->  16.5 because (0 + 25 + 25 + 16) / 4
[-1, 0], [0, -1]                  -->   1   because (1 + 1) / 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) {

    double ValFinal = 0;
    //  <----  hajime!
    for (int i = 0; i < n; i++){
        /* code */
        double x = a[i] - b[i];
        ValFinal = ValFinal + (fabs(x) * fabs(x));

    }
    return ValFinal/n;
}

#include <stddef.h>
#include <math.h>

double mean_square_error_corr(size_t n, const int a[n], const int b[n]) {
    double result = 0;
    for(size_t i=0; i<n; i++) {
        result += pow(a[i] - b[i], 2);
    }
    return result / n;
}