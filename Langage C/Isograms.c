/* Problème: rank: 7kyu 
Un isogramme est un mot qui n'a pas de lettres répétitives, consécutives ou non consécutives.
Implémentez une fonction qui détermine si une chaîne qui ne contient que des lettres est un isogramme.
Supposons que la chaîne vide est un isogramme.
Ignorer la casse.

Exemple : (Entrée --> Sortie)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)
*/

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

bool IsIsogram(char *str) {
    // Stock la différence entre str[i] et a dans un tableau cache. Si cache == 0 => la lettre est répéter <3
    char cache[26] = {0};
    for (int i = 0; str[i] != 0; ++i){
        char c = tolower(str[i]) - 'a';
        if (cache[c]) return false;
        cache[c] = 1;
    }
    return str[0] == 0 || true;
}
