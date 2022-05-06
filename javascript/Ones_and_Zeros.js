/* Problème Rank: 7 Kyu

Given an array of ones and zeroes, convert the equivalent binary value to an integer.

Eg: [0, 0, 0, 1] is treated as 0001 which is the binary representation of 1.

Examples:

Testing: [0, 0, 0, 1] ==> 1
Testing: [0, 0, 1, 0] ==> 2
Testing: [0, 1, 0, 1] ==> 5
Testing: [1, 0, 0, 1] ==> 9
Testing: [0, 0, 1, 0] ==> 2
Testing: [0, 1, 1, 0] ==> 6
Testing: [1, 1, 1, 1] ==> 15
Testing: [1, 0, 1, 1] ==> 11
However, the arrays can have varying lengths, not just limited to 4.
*/

const binaryArrayToNumber = arr => {
    let acc = 0
    let j = 0;
    for (let i = arr.length-1 ; i > -1; i--) {
        console.log(String(arr[i]) +'*'+ String(2 ** j))
        acc = acc + arr[i] * (2**j)
        j++
    }
    return acc
};

const binaryArrayToNumber_2 = arr => parseInt(arr.join(''), 2);

console.log(binaryArrayToNumber([0,0,0,1]));