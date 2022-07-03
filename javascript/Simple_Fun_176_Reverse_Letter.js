/* Problème Rank: 7 Kyu

Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string
*/

function reverseLetter(str) {
    //coding and coding..
    var New = str.split("").reverse().join("")
    var Final = String()
    for (let i = 0; i < New.length; i++) {
        if (/[a-zA-Z]/.test(New[i])) {
            Final = Final + New[i]
        }
    }
    return Final

}

const reverseLetter_correction = str => str.match(/[a-z]/g).reverse().join('');