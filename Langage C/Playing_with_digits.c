/* Problème Rank: 6 Kyu

Certains nombres ont de drôles de propriétés. Par example:

89 --> 8¹ + 9² = 89 * 1
695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

Soit un entier positif n écrit abcd... (a, b, c, d... étant des chiffres) et un entier positif p

on veut trouver un entier positif k, s'il existe,
tel que la somme des chiffres de n prises aux puissances successives de p soit égale à k * n.
En d'autres termes:

Existe-t-il un entier k tel que : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k

Si c'est le cas on renverra k, sinon on renverra -1.

Remarque : n et p seront toujours donnés sous la forme d'entiers strictement positifs.

dig_pow(89, 1) should return 1 since 8¹ + 9² = 89 = 89 * 1
dig_pow(92, 1) should return -1 since there is no k such as 9¹ + 2² equals 92 * k
dig_pow(695, 2) should return 2 since 6² + 9³ + 5⁴= 1390 = 695 * 2
dig_pow(46288, 3) should return 51 since 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

*/

int digPow(int n, int p) {
    int numDigits = floor(log10(n)) + 1;
    int result = 0;
    int num = n;
    for (int i = p + numDigits - 1; i >= p; i--) {
        result += pow(num%10, i);
        num/=10;
    }
    if (result % n == 0) {
        return result / n;
    }
    return -1;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int digPow(int n, int p) {
    long long sum = 0;
    char* s = malloc(20);
    sprintf(s, "%d", n);
    for(int i = 0; i < strlen(s); i++) {
        sum += pow(s[i] - '0', p + i);
    }
    return (sum / n) * n == sum ? sum / n : -1;
}