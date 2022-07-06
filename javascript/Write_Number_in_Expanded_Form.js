/* Problème Rank: 6 Kyu

Write Number in Expanded Form
You will be given a number and you will need to return it as a string in Expanded Form. For example:

expandedForm(12); // Should return '10 + 2'
expandedForm(42); // Should return '40 + 2'
expandedForm(70304); // Should return '70000 + 300 + 4'
NOTE: All numbers will be whole numbers greater than 0.

If you liked this kata, check out part 2!!
*/

function expandedForm(num) {
    // expandedForm(70304), '70000 + 300 + 4'
    L = String(num).split("")
    L2 = []
    for (let i = 0; i < L.length; i++) {
        if (L[i] != 0){
            L2.push(String( Number(L[i]) * (10 **(L.length -1 - i) ) ))
        }  
    }
    
    return L2.join(' + ')
}
console.log( expandedForm(70304))

const expandedForm_corr = n => n.toString()
                            .split("")
                            .reverse()
                            .map( (a, i) => a * Math.pow(10, i))
                            .filter(a => a > 0)
                            .reverse()
                            .join(" + ");