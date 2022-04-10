/* Problème Rank: 7 kyu

Votre équipe est en train d'écrire un nouvel éditeur de texte sophistiqué et 
vous avez été chargé d'implémenter la numérotation des lignes.

Écrivez une fonction qui prend une liste de chaînes et renvoie chaque ligne précédée du numéro correct.

La numérotation commence à 1. Le format est n: string. Remarquez le côlon et l'espace entre les deux.

Exemples:

number([]) // => []
number(["a", "b", "c"]) // => ["1: a", "2: b", "3: c"]

*/

function number(array){
    if (array == []) return Array();
    for (let i = 0; i < array.length; i++) {
        array[i] = String(i) + ": " + array[i];  
    }
    return array;
}

console.log( number([]) );
