/* Problème Rank: 8 Kyu

Input: Array of elements

["h","o","l","a"]

Output: String with comma delimited elements of the array in th same order.

"h,o,l,a"

Note: if this seems too simple for you try the next level

*/

public class Printing_Array_elements_with_Comma_delimiters {
    public static String printArray(Object[] array) {
        String new_str = "";
        for (int i = 0; i < array.length; i++ ){
            new_str += "," +array[i];
        }
        return new_str.substring(1, new_str.length());
    }    
}
