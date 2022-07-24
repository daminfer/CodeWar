/* Problème Rank: 7 Kyu

Your task is to write function factorial.

https://en.wikipedia.org/wiki/Factorial
*/

unsigned __int128 factorial(unsigned n){
    return n ? n * factorial(n-1) : 1;
}

