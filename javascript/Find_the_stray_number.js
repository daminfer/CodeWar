/* Problème Rank: 7 Kyu

On vous donne un tableau d'entiers de longueur impaire, 
dans lequel ils sont tous identiques, à l'exception d'un seul nombre.

Complétez la méthode qui accepte un tel tableau et renvoie ce seul nombre différent.

Le tableau d'entrée sera toujours valide ! (longueur impaire >= 3)

Exemples:

[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3

*/

function stray(array) {
    let test = array[0]

    // Test: Vérifie que test n'est pas le nombre différent:
    if (test != array[1] && test != array[2]){return test}
    
    // On parcour la liste a la recherche du nombre différent:
    for (let i = 0; i < array.length; i++) {
        if (array[i] != test) {return array[i]}     
    }
}

console.log(stray([2, 1, 1]))