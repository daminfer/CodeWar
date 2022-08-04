/* Problème Rank: 7 Kyu

Write a function that takes a positive integer n, sums all the cubed values from 1 to n, 
and returns that sum.

Assume that the input n will always be a positive integer.

Examples: (Input --> output)

2 --> 9 (sum of the cubes of 1 and 2 is 1 + 8)
3 --> 36 (sum of the cubes of 1, 2, and 3 is 1 + 8 + 27)

*/

unsigned long long sum_cubes(unsigned short n){
    unsigned long long acc = 0;
    for (int i = 0; i < n; i++){
        /* code */
        acc = (unsigned long long) (acc + (i * i * i));
    }
    return acc;
}

unsigned long long sum_cubes_corr(unsigned short n) {
    return (unsigned long long)n * n * (n + 1) * (n + 1) / 4;
}