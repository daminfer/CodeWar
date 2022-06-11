/*Problème Rank: 8 Kyu

Description:
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"

*/

public class Exclamation_marks_series_11 {
    public static String replace(final String s) {
        return s.replaceAll("[aeiouAEIOU]", "!");
    } 
}
