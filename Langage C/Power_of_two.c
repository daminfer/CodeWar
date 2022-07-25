/* Problème Rank: 7 Kyu

Complete the function power_of_two/powerOfTwo (or equivalent, depending on your language) that determines if a given non-negative integer is a power of two. From the corresponding Wikipedia entry:

a power of two is a number of the form 2n where n is an integer, i.e. the result of exponentiation with number two as the base and integer n as the exponent.

You may assume the input is always valid.

Examples
power_of_two(0);     // returns false
power_of_two(16);    // returns true
power_of_two(100);   // returns false
power_of_two(1024);  // returns true
power_of_two(20000); // returns false
Beware of certain edge cases - for example, 1 is a power of 2 since 2^0 = 1 and 0 is not a power of 2.
*/

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool power_of_two(const int x) {
    if (x == 0){ return false;}
    
    int i = 0;
    int val = 0;
    while (val < x){
        val = pow(2,i);
        i++;
    }

    if (val == x) {return true;}
    else {return false;}
}

#include <stdbool.h>

bool power_of_two_corr(const int x) {
  int power = 1;
  
  while (power < x) power <<= 1;
  
  return (power == x);
}