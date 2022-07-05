/* Problème Rank: 8 Kyu

Create a function called shortcut to remove the lowercase vowels (a, e, i, o, u ) in a given string.

Examples:

"hello"     -->  "hll"
"codewars"  -->  "cdwrs"
"goodbye"   -->  "gdby"
"HELLO"     -->  "HELLO"

don't worry about uppercase vowels
y is not considered a vowel for this kata
*/

function shortcut (string) {
    var F = ""
    for (let i = 0; i < string.length; i++) {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u') {
            F = F + string[i];
        }
    }
    return F;
}

function shortcut_correction(string){
    return string.replace(/[aeiou]/g,'')
}