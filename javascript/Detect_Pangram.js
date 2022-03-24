/* 
CONSIGNE:

Un pangramme est une phrase qui contient au moins une fois chaque lettre de l'alphabet. 
Par exemple, la phrase "Le renard brun rapide saute par-dessus le chien paresseux" est un pangramme,
car elle utilise les lettres AZ au moins une fois (la casse n'a pas d'importance).

Etant donné une chaîne, détecte s'il s'agit ou non d'un pangramme. 
Renvoie True si c'est le cas, False sinon. Ignorez les chiffres et la ponctuation. 
*/

function isPangram(string){
    let alphabet = "abcdefghijklmnopqrstuvwxyz";
    let regex = /\s/g;
    let lowercase = s.toLowerCase().replace(regex, "");
   
    for(let i = 0; i < alphabet.length; i++){
     if(lowercase.indexOf(alphabet[i]) === -1){
       return false;
     }
    }
   
   return true;  
}