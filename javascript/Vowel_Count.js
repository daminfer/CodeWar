/* 
CONSIGNE:

Renvoie le nombre (compte) de voyelles dans la chaîne donnée.
Nous considérerons a, e, i, o, u comme voyelles pour ce Kata (mais pas y).
La chaîne d'entrée se composera uniquement de lettres minuscules et/ou d'espaces.

*/

function getCount(Chaine) {
    var vowelsCount = 0;
    for (let index = 0; index < Chaine.length; index++) {
        if ((Chaine[index].toLowerCase() == 'a') || (Chaine[index].toLowerCase() == 'e') || (Chaine[index].toLowerCase() == 'i') || (Chaine[index].toLowerCase() == 'o') || (Chaine[index].toLowerCase() == 'u')){
            vowelsCount = vowelsCount + 1;
        }
        
    }
    return vowelsCount;
}
