/* Problème Rank: 7kyu
Trouver la somme totale des angles internes (en degrés) dans un polygone simple à n côtés. 
N sera supérieur à 2. */

int angle(int n) {
    // Retourne la somme des angles internes(en degre) d'un polynome simple a n cotes.
    n = 180 * (n - 2);
    return n;
}