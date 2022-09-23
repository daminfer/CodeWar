/* Problème Rank: 8 Kyu

Write a function that merges two sorted arrays into a single one. 
The arrays only contain integers. 
Also, the final outcome must be sorted and not have any duplicate.

*/

import java.util.stream.*;

public class Merging_sorted_integer_arrays_without_duplicates {
    public static int[] mergeArrays(int[] first, int[] second) {
        return IntStream.concat(IntStream.of(first),IntStream.of(second)).distinct().sorted().toArray();
    }
}
