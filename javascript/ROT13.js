/* Problème Rank: 5 Kyu

How can you tell an extrovert from an introvert at NSA? Va gur ryringbef, gur rkgebireg ybbxf ng gur BGURE thl'f fubrf.

I found this joke on USENET, but the punchline is scrambled. Maybe you can decipher it? According to Wikipedia, ROT13 (http://en.wikipedia.org/wiki/ROT13) is frequently used to obfuscate jokes on USENET.

Hint: For this task you're only supposed to substitue characters. Not spaces, punctuation, numbers etc.

Test examples:

"EBG13 rknzcyr." -->
"ROT13 example."

"This is my first ROT13 excercise!" -->
"Guvf vf zl svefg EBG13 rkprepvfr!"

A - Z => [65; 90]
a - z => [97; 122]
*/

function rot13(str) {
    var New = ""
    var val = 0
    for (let i = 0; i < str.length; i++) {
        val = str.charCodeAt(i)

        if (val >= 65 && val <= 90){
            // Pour les lettres entre: A - Z => [65; 90]
            val = (val - 65 + 13) % 26
            New = New + String.fromCharCode(65 + val)
        }
        else if (val >= 97 && val <= 122){
            // Pour les lettres entre: a - z => [97; 122]
            val = (val - 97 + 13) % 26
            New = New + String.fromCharCode(97 + val)
        }
        else {
            // Pour tout les autres caractère spéciaux:
            New = New + str[i]
        }
    }
    return New
}

function rot13_corr(str) {
    return str.replace(/[a-z]/ig, function(x){
      return String.fromCharCode(x.charCodeAt(0) + (x.toLowerCase() <= 'm' ? 13: -13));
    });
}