/* Problème Rank: 5 Kyu

Qu'est-ce qu'un anagramme ?Eh bien, deux mots sont des anagrammes l'un de l'autre
s'ils contiennent tous les deux les mêmes lettres.
Par exemple: 'abba' & 'baab' == true

Écrivez une fonction qui trouvera tous les anagrammes d'un mot dans une liste.
Vous recevrez deux entrées un mot et un tableau avec des mots.
Vous devez renvoyer un tableau de tous les anagrammes ou un tableau vide s'il n'y en a pas.

Par exemple:
anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']) => ['aabb', 'bbaa']
anagrams('laser', ['lazing', 'lazy',  'lacer']) => []
*/
function test(mot, mot2){
    if (mot.length != mot2.length) {
        return false;
    }
    for (let i = 0; i < mot.length; i++) {
        console.log("i = ", i);
        for (let j = 0; j < mot2.length; j++) {
            if (mot[i] == mot2[j]) {
                console.log("j = ", j);
                mot2 = mot2.slice(0, j) + mot2.slice(j+1, mot2.length);
                console.log("TEST: test -> ", mot2);
                break;
            }   
        }
    }
    if (mot2 == '') {return true;}
    else {return false;}
}

function anagrams(mot, L) {
    Finale = Array()
    for (let i = 0; i < L.length; i++) {
        if ( test(mot, L[i]) ) { Finale.push(L[i])}  
    }
    return Finale;
}

console.log(anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']));