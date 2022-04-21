/* Problème Rank: 6 Kyu

Write a function, persistence, 
that takes in a positive parameter num and returns its multiplicative persistence, 
which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)
*/

#include <stdio.h>



int persistence(int n) {
    int val = 1;
    int compt = 0;
    char text[20];
    while (n >= 10){
        sprintf(text, "%d", n);
        for (int i = 0; text[i] != '\0'; i++){
            val = val * (text[i] - '0');
        }
        n = val;
        val = 1;
        compt++;
    }
    return compt;
}

int main(){
    printf("%d", persistence(25));
    return 0;
}