/* Problème Rank: 8 Kyu

Your Job:

Find the sum of all multiples of n below m

Keep in Mind:

n and m are natural numbers (positive integers)
m is excluded from the multiples

Examples:

Kata.sumMul(2, 9)   ==> 2 + 4 + 6 + 8 = 20
Kata.sumMul(3, 13)  ==> 3 + 6 + 9 + 12 = 30
Kata.sumMul(4, 123) ==> 4 + 8 + 12 + ... = 1860
Kata.sumMul(4, -7)  // throws IllegalArgumentException

*/

public class Sum_of_Multiples {
    public static long sumMul(int n, int m) {
        if (n < 1 || m < 1) throw new IllegalArgumentException("n or m < 1");
        int x = (m - 1) / n;
        return (long) (n * 0.5 * x * (x + 1));
    }
}