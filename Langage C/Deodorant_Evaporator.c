/* Problème Rank: 7kyu

Ce programme teste la durée de vie d'un évaporateur contenant un gaz.

On connaît la contenance de l'évaporateur (contenu en ml), 
le pourcentage de mousse ou de gaz perdu chaque jour (evap_per_day) et 
le seuil (threshold) en pourcentage au-delà duquel l'évaporateur n'est plus utile. 
Tous les nombres sont strictement positifs.

Le programme signale le nième jour (sous forme d'entier) pendant lequel l'évaporateur sera hors d'usage.

Exemple:
evaporator(10, 10, 5) -> 29
*/

int evaporator(double content, double evap_per_day, double threshold) {
    double fin = (content * threshold) / 100;
    int day = 0;
    while(content >= fin){
        double perte = (content * evap_per_day) / 100;
        content = content - perte;
        day++;
    }
    return day;
}