/* Problème Rank: 8 Kyu

Write a simple regex to validate a username. Allowed characters are:

lowercase letters,
numbers,
underscore
Length should be between 4 and 16 characters (both included).

*/

public class Simple_validation_of_a_username_with_regex {
    public static boolean validateUsr(String s) {
        return s.matches("[a-z_\\d]{4,16}");
    }    
}
