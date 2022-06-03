/* Problème Rank: 8 Kyu


Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.

For example:

a = 1
b = 4
--> [1, 2, 3, 4]
*/

function between(a, b) {
    TAB = []
    for ( let i = 0; a+i < b+1; i++) {
        TAB[i] = i + a
    }
    return TAB
}