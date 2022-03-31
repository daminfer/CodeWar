/* Problème Rank: 7kyu

Habituellement, lorsque vous achetez quelque chose, on vous demande si votre numéro de carte de crédit,
votre numéro de téléphone ou la réponse à votre question la plus secrète est toujours correct.
Cependant, puisque quelqu'un pourrait regarder par-dessus votre épaule,
vous ne voulez pas que cela s'affiche sur votre écran. Au lieu de cela, nous le masquons.

Votre tâche consiste à écrire une fonction maskify,
qui transforme tous les caractères sauf les quatre derniers en '#'.

Exemples:

maskify("4556364607935616") == "############5616"
maskify(     "64607935616") ==      "#######5616"
maskify(               "1") ==                "1"
maskify(                "") ==                 ""

// "What was the name of your first pet?"
maskify("Skippy")                                   == "##ippy"
maskify("Nananananananananananananananana Batman!") == "####################################man!"
*/

// return masked string
function maskify(cc) {

    if (cc.length < 5) {return cc;} 
    else {
        var test = cc.substring(0, cc.length - 4).replace(/./gs,"#");
        var p = cc[cc.length - 4] + cc[cc.length - 3] + cc[cc.length - 2] + cc[cc.length - 1];
        console.log(test + p);
        return test + p;       
    }

}

function Correction_maskify(cc) {
    return cc.slice(0, -4).replace(/./g, '#') + cc.slice(-4);
  }