/* Problème Rank: 7 Kyu

Complete the method which accepts an array of integers, and returns one of the following:

"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
You can assume the array will always be valid, and there will always be one correct answer.

*/

public class Sorted_yes_no_how {

    public static String isSortedAndHow(final int[] array) {
        final boolean ascending = array[0] < array[1];

        for (int i = 2; i < array.length; i++) {
            if (ascending ? (array[i - 1] > array[i]) : (array[i - 1] < array[i])) {
                return "no";
            }
        }

        return String.format("yes, %s", ascending ? "ascending" : "descending");
    }

}
