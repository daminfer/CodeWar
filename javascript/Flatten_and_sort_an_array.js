/* Problème Rank: 7 Kyu

Défi:

Étant donné un tableau d'entiers à deux dimensions,
renvoie la version aplatie du tableau avec tous les entiers dans l'ordre trié (ascendant).

Exemple:

Étant donné [[3, 2, 1], [4, 6, 5], [], [9, 7, 8]],
votre fonction devrait retourner [1, 2, 3, 4, 5, 6, 7, 8 , 9].

Addenda:

Veuillez garder à l'esprit que JavaScript trie par défaut les objets par ordre alphabétique.
Pour plus d'informations, veuillez consulter:
http://stackoverflow.com/questions/6093874/why-doesnt-the-sort-function-of-javascript-work-well
*/

"use strict";

function flattenAndSort(array) {
    let tab = []
    for (let i = 0; i < array.length; i++) {
        tab = array[i].concat(tab)
        
    }
    return tab.sort(function(a, b) { return a > b ? 1 : -1});
}

/* Leçon:

-"use strict"; => permet de passer le code en mode script -> Permet de convertir des "fautes" en
erreur, ex: varialeMalDéclarée = 17; // lève une ReferenceError 
Ou var undefined = 5;  // déclenche une exception TypeError

- Array.sort(FonctionComparaison(a,b)) -> cette méthode sans fonction trié dans l'ordre lexicographique,
cependant on peut lui mettre une fonctionComparaison(a,b) qui en fonction de la valeur renvoyer
trie différament:

fonctionComparaison(a, b) > 0 => Trie b avant a => donc trie dans l'ordre décroissant
fonctionComparaison(a, b) < 0 => Trie a avant b => donc trie dans l'ordre croissant
fonctionComparaison(a, b) = 0 => on laisse a et b inchangés l'un par rapport à l'autre,
mais triés par rapport à tous les autres éléments.
*/

// Test:
console.log( flattenAndSort([ [3, 2, 1], [7, 9, 8], [6, 4, 5] ]) );