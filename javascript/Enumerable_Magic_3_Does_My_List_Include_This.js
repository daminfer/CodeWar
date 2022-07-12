/* Problème Rank: 8 Kyu

Create a method that accepts a list and an item, and returns true if the item belongs to the list, otherwise false.

*/

function include(arr, item){
    // ...
    for(let i = 0; i < arr.length; i++){
        if (item == arr[i] ) {
            return true
        }
    }

    return false
}
var list = [0,1,2,3,5,8,13,2,2,2,11];
console.log(include(list, "2"))

// correction:

function include(arr, item){
    return arr.includes(item);
}