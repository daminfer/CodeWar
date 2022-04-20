/* Problème Rank: 8 Kyu

Create a function that takes an integer as an argument and 
returns "Even" for even numbers or "Odd" for odd numbers.
*/

#include <stdio.h>

const char *even_or_odd(int number);

const char *even_or_odd(int number){
    // if conditionel => (condition) ? instruction si vrai : instruction si faux
    // return (n & 1)?("Odd"):("Even");
    if ((number % 2) == 0){
        return "Even";
    }
    else{
        return "Odd";
    }
    
}

int main(){
    printf("%s", even_or_odd(20));
}