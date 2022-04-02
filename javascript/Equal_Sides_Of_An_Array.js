/* Problème Rank: 6 kyu

Vous allez recevoir un tableau d'entiers.
Votre travail consiste à prendre ce tableau et à trouver un index N où 
la somme des nombres entiers à gauche de N est égale à la somme des nombres entiers à droite de N.
S'il n'y a pas d'index qui rendrait cela possible, return -1.

Entrée :
un tableau d'entiers de longueur 0 < arr < 1000.
Les nombres du tableau peuvent être n'importe quel nombre entier positif ou négatif.

Sortie :
L'index le plus bas Noù le côté à gauche de Nest égal au côté à droite de N.
Si vous ne trouvez pas d'index qui respecte ces règles, vous renverrez -1.
*/
function Addition(Tab1){
    var resultat = 0;
    for (let index = 0; index < Tab1.length; index++) {
        resultat = resultat + Tab1[index];
    }
    return resultat;
}


function findEvenIndex(tab){
    var test = 0;
    for (let i = 0; i < tab.length; i++) {
        var tab1 = tab.slice(0,i+ 1);
        var tab2 = tab.slice(i,tab.length);
        console.log("Tableau1: ",tab1);
        console.log("Tableau2: ",tab2);
        test = Addition(tab1) - Addition(tab2);
        if (test == 0) {
            return i;
        }
    }
    return -1;
}
console.log(findEvenIndex([1,2,3,4,3,2,1]))