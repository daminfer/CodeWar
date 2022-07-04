/* Problème Rank: 7 Kyu

Given a string, capitalize the letters that occupy even indexes and odd indexes separately, 
and return as shown below. Index 0 will be considered even.

For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

The input will be a lowercase string with no spaces.

Good luck!
*/

function capitalize(s){
    var un = String()
    var deux = String()
    for (let i = 0; i < s.length; i++) {

        if (i % 2 == 0) {un = un + s[i].toUpperCase()}
        else {un = un + s[i]}

        if (i % 2 == 1) {deux = deux + s[i].toUpperCase()} 
        else {deux = deux + s[i]}

    }
    return [un, deux];
};

function capitalize_correction(s){
    const odd = s.split("").map((l, i) => i % 2 !== 0 ? l.toUpperCase() : l).join("");
    const even = s.split("").map((l, i) => i % 2 === 0 ? l.toUpperCase() : l).join("");
    return [even, odd];
};