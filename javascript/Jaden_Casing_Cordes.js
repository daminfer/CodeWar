/* Problème Rank: 7 Kyu

Jaden Smith, le fils de Will Smith, est la star de films tels que The Karate Kid (2010) et After Earth (2013). 
Jaden est également connu pour une partie de sa philosophie qu'il livre via Twitter . 
Lorsqu'il écrit sur Twitter, il est connu pour presque toujours mettre en majuscule chaque mot. 
Pour plus de simplicité, vous devrez mettre en majuscule chaque mot, 
vérifiez comment les contractions devraient être dans l'exemple ci-dessous.

Votre tâche consiste à convertir des chaînes telles qu'elles seraient écrites par Jaden Smith. 
Les chaînes sont des citations réelles de Jaden Smith, 
mais elles ne sont pas en majuscules de la même manière qu'il les a tapées à l'origine.

Exemple:

Not Jaden-Cased: "How can mirrors be real if our eyes aren't real"
Jaden-Cased:     "How Can Mirrors Be Real If Our Eyes Aren't Real"

*/

String.prototype.toJadenCase = function () { 
    // this => correspond a l'objet utiliser ici String la chaine.
    return this.split(" ").map(function(word){ // On transforme la chaine en list puis on applique a chaque element le fonction word:
        return word.charAt(0).toUpperCase() + word.slice(1);
    }).join(" ");
}

var str = "How can mirrors be real if our eyes aren't real";
console.log(str.toJadenCase());