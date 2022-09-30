/* Problème Rank: 8 Kyu

This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

*/

public class Simple_multiplication {
    public static int SimpleMultiplication(int n){
        // return n % 2 == 0 ? n * 8 : n * 9;
        if (n % 2 == 0) {
            return n*8;
        } else {
            return n*9;
        }
    }
}
