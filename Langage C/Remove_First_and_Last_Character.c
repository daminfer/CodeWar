/* Problème Rank: 8 Kyu

Votre objectif est de créer une fonction qui supprime les premier et dernier caractères d'une chaîne.
Vous avez un paramètre, la chaîne d'origine.
Vous n'avez pas à vous soucier des chaînes de moins de deux caractères.

*/

#include <string.h>

char* remove_char(char* dst, const char* src){
    strcpy(dst, src + 1);
    dst[strlen(dst) - 1] = '\0';
    return dst;
}