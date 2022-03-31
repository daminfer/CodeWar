/* Problème Rank: 7kyu

Dans ce kata, on vous demande de mettre au carré chaque chiffre d'un nombre et de les concaténer.
Par exemple, si nous exécutons 9119 via la fonction, 811181 sortira, car 9 2 est 81 et 1 2 est 1.
Remarque : La fonction accepte un entier et renvoie un entier.
*/

function FIRST_TRY_squareDigits(num){
    // Premier test -> Mal compris l'énnoncer et ce qui entendais par Concaténation ex: 9119 -> 81 1 1 81
    var test = String(num);
    var Finale = 0;
    var x = 0;
    for (let index = 0; index < test.length; index++) {
        var variable = Number(test[index]) ** 2;
        if (variable >= 10) {
            x = x + 1;
        }
        var puissance = 10 ** (Number(test.length)-1-index + x)
        Finale = Finale +  (variable * puissance) ;
        console.log("Boucle: %d avec i = %d", test[index],Number(test.length) -1 - index);
        console.log("Finale: %d = %d * %d", Finale,Number(test[index]) ** 2, puissance);
    }
    console.log( typeof Finale);
    return Finale;
}
function squareDigits(num){
    var test = String(num);
    var tab = Array(test.length);
    for (let index = 0; index < test.length; index++) {
        tab[index] = Number(test[index]) ** 2;
        console.log(test[index]);        
    }
    return Number(tab.toString().replace(/,/g,''));
}

console.log( squareDigits(9119) );