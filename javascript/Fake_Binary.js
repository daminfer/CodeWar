/* Problème Rank: 8 Kyu

Given a string of digits, 
you should replace any digit below 5 with '0' and any digit 5 and above with '1'. 
Return the resulting string.

Note: input will never be an empty string

*/

function fakeBin(x){ 
    var f = x.split('')
    var mot = ""
    for (let i = 0; i < f.length; i++) {
        if (f[i] >= 5) {
            mot = mot + "1"
        } else {
            mot = mot + "0"
        }
    }
    return mot
}

function fakeBin_corr1(x) {
    return x.replace(/\d/g, d => d < 5 ? 0 : 1);
}

function fakeBin_corr2(x) {
    return x.split('').map(n => n < 5 ? 0 : 1).join('');
}