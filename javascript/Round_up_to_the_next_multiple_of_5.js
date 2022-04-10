/* Problème Rank: 7 Kyu

Étant donné un nombre entier en entrée,
pouvez-vous l'arrondir au multiple de 5 suivant (c'est-à-dire "plus élevé")?

Exemples:

input:    output:

0    ->   0
2    ->   5
3    ->   5
12   ->   15
21   ->   25
30   ->   30
-2   ->   0
-5   ->   -5

etc.

L'entrée peut être n'importe quel nombre entier positif ou négatif (y compris 0).

Vous pouvez supposer que toutes les entrées sont des entiers valides.

*/

const roundToNext = n => {
    if (n % 5 == 0){return n;}
    else if ( (n + 1) % 5 == 0) {return n + 1;}
    else if ( (n + 2) % 5 == 0) { return n + 2;}
    else if ( (n + 3) % 5 == 0) { return n + 3;}
    else if ( (n + 4) % 5 == 0) { return n + 4;}
    else console.log("error !");
}
