/* Problème Rank: 8 Kyu

If you can't sleep, just count sheep!!

Task:
Given a non-negative integer, 3 for example, return a string with a murmur: 
"1 sheep...2 sheep...3 sheep...". 
Input will always be valid, i.e. no negative integers.
*/

var countSheep = function (num){
    let text = "";
    for (let i = 1; i < num + 1; i++) {
        text = text + String(i) + " sheep...";
    }
    return text
}

var countSheep_2 = function (num){
    let str = "";
    for(let i = 1; i <= num; i++) { str+= `${i} sheep...`; }
    return str;
  }