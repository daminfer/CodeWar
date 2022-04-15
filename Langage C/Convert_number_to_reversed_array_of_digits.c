/* Problème Rank: 8 Kyu

Convertir un nombre en tableau inversé de chiffres
Étant donné un nombre aléatoire non négatif, 
vous devez renvoyer les chiffres de ce nombre dans un tableau dans l'ordre inverse.

Exemple:
348597 => [7,9,5,8,4,3]
0 => [0]

*/

#include <stddef.h>
#include <inttypes.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out){

    // Initialisation:
    *length_out = 0;

    // Parcour et impression chaque nombre de n dans digit[]:
    do {
        digits[(*length_out)++] = n % 10;
        n /= 10;
    } while(n);

}