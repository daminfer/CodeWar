/* Problème Rank: 7 Kyu

Task:

Given a list of digits, return the smallest number that could be formed from these digits, 
using the digits only once (ignore duplicates).

Notes:

Only positive integers will be passed to the function (> 0 ), no negatives or zeros.
Input >> Output Examples
minValue ({1, 3, 1})  ==> return (13)

Explanation:

(13) is the minimum number could be formed from {1, 3, 1} , Without duplications
minValue({5, 7, 5, 9, 7})  ==> return (579)


Explanation:

(579) is the minimum number could be formed from {5, 7, 5, 9, 7} , Without duplications
minValue({1, 9, 3, 1, 7, 4, 6, 6, 7}) return  ==> (134679)

Explanation:

(134679) is the minimum number could be formed from {1, 9, 3, 1, 7, 4, 6, 6, 7} , Without duplications

*/

#include <stdlib.h>

unsigned long long minValue(const int* values, const size_t len){
    int min = 0;
    int digits[10] = {0};
    for (int i=0;i<len;++i)
    {
        digits[values[i]]++;
    }
    for (int i=1;i<=9;++i)
    {
        if (digits[i]) {min *= 10; min += i;} 
    }
    return min;
}