/* Problème Rank: 7 Kyu

Determine the total number of digits in the integer (n>=0) given as input to the function. 
For example, 9 is a single digit, 66 has 2 digits and 128685 has 6 digits. 
Be careful to avoid overflows/underflows.

All inputs will be valid.

*/

public class Number_of_Decimal_Digits {
    public static int Digits(long n) {
        int acc = 1;

        while ( n >= 10){
            n /= 10;
            acc += 1; 
        }
      
        return acc;
    }
}
