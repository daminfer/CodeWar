/* Problème Rank: 6 kyu

Écrivez une fonction qui prend une chaîne binaire et renvoie le texte décodé équivalent
(le texte est encodé en ASCII).

Chaque 8 bits sur la chaîne binaire représente 1 caractère sur la table ASCII.

La chaîne d'entrée sera toujours une chaîne binaire valide.

Les caractères peuvent être compris entre "00000000" et "11111111" (inclus)

Remarque : dans le cas d'une chaîne binaire vide, votre fonction doit renvoyer une chaîne vide.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Time Out !
char *binary_to_string(const char *binary) {
    char var[strlen(binary)];
    int Finale = 0;
    if (binary == "") return "";
    for (int i = 0; i < strlen(binary); i++){
        var[i] = binary[i];
        if ((i % 7 == 0) && (i != 0)){
            printf("%s",var);
            for (int j = 0; j < 9; j++){
                Finale = Finale + ((2 ** j) * (int) var[i]);
            }
        }
        
    }
    printf("%c",Finale);
    return Finale;
}
*/

// Correction:

#define BIN(b, i, n)  (b[i] - '0' << n)

char *binary_to_string(const char *b){
    char *r = calloc(sizeof(char), (strlen(b) >> 3) + 1);
    char *s;
    for (s = r; *b; b += 8)
        *s++ = BIN(b, 0, 7) | BIN(b, 1, 6) | BIN(b, 2, 5) | BIN(b, 3, 4) | BIN(b, 4, 3) | BIN(b, 5, 2) | BIN(b, 6, 1) | BIN(b, 7, 0);
    return r;
}

#undef BIN