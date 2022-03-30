/* Problème Rank: 5 kyu
ROT13 est un chiffrement de substitution de lettre simple qui remplace une lettre par la lettre 13 lettres 
après elle dans l'alphabet. 
ROT13 est un exemple du chiffrement de César.

Créez une fonction qui prend une chaîne et renvoie la chaîne chiffrée avec Rot13.
Si des nombres ou des caractères spéciaux sont inclus dans la chaîne, ils doivent être renvoyés tels quels.
Seules les lettres de l'alphabet latin/anglais doivent être décalées, 
comme dans "l'implémentation" Rot13 originale.
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(const char *src){
    int i = 0;
    char *test;
    test = (char *) malloc( strlen(src));
    while (src[i] != '\0'){
        // Liste alphabet majuscule: [A -> 65 ; Z -> 90]
        if ( (src[i] >= 65) && (src[i] <= 90) ){
            test[i] = ((src[i] - 'A') + 13) % 26;
            test[i] = test[i] + 'A';
        }
        // Liste alphabet minuscule: [a -> 97 ; z -> 122]
        else if ( (src[i] >= 97) && (src[i] <= 122) ){
            test[i] = ( ((src[i] - 'a') + 13) % 26);
            test[i] = test[i] + 'a';
        }
        else{ test[i] = src[i]; }
        i = i +1; 
    }
    test[i] = '\0';
    return test;
}

int main(){
    char *Chaine = rot13("Tes?  _^t"); 
    printf("Liste: %s",Chaine);
    free(Chaine);
}