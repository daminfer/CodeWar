/* Problème Rank: 4 Kyu

Complete the solution so that it strips all text that follows any of a set of comment markers passed in. Any whitespace at the end of the line should also be stripped out.

Example:

Given an input string of:

apples, pears # and bananas
grapes
bananas !apples
The output expected would be:

apples, pears
grapes
bananas
The code would be called like so:

var result = solution("apples, pears # and bananas\ngrapes\nbananas !apples", ["#", "!"])
// result should == "apples, pears\ngrapes\nbananas"

*/

function solution(input, markers) {
    var mode = true;
    var New = ""
    for (let i = 0; i < input.length; i++) {

        if ( input[i] == "\n" ){
            mode = true;
        }
        for (let j = 0; j < markers.length; j++) {
            if ((markers[j] == input[i]) ) {
                mode = false;
                for (let k = New.length - 1; k > -1; k--) {
                    if (New[k] == " ") {
                        New = New.slice(0, k) + New.slice(k + 1, New.length); 
                    }
                    else{
                        break;
                    }
                }
                break; 
            }
        }
        
        if (mode == true) {
            New = New + input[i]
        }
    }

    return New
}

console.log(solution("apples, plums % and bananas\npears\noranges !applesauce", ["%", "!"]))

function solution_corr1(input, markers){
    return input.replace(new RegExp("\\s?[" + markers.join("") + "].*(\\n)?", "gi"), "$1");
}

function solution_corr2(input, markers) {
    return input.split('\n').map(
      line => markers.reduce(
        (line, marker) => line.split(marker)[0].trim(), line
      )
    ).join('\n')
}