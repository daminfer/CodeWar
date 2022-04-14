/* Problème Rank: 8Kyu

Complétez la solution pour qu'elle inverse la chaîne qui lui est passée.

'world'  =>  'dlrow'
'word'   =>  'drow'
*/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrev(char *string){
    // Ce code marche sur codewar mais pas la .........

    // Initialisation:
    int compt = 0;
    size_t taille = strlen(string) + 1;
    char *chaine = (char *) malloc( taille * sizeof(char));

    // Construction de la chaine:
    for (int i = strlen(string)-1; i >= 0; i--){
        chaine[compt] = string[i];
        compt++;
    }
    chaine[compt] = '\0';

    // Copie de la chaine:
    for (int i = 0; chaine[i] != '\0'; i++){
        string[i] = chaine[i]; // A l'aire de faire planter ...
    }

    // Return de string:
    free(chaine);
    return string;
}


char *strrev (char *string){
    //Correction ...
    int i;
    char *str = string;
    for(i = 0; i < (int)strlen(str)/2; i++){
        char c = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = c;
    }
    return str; // reverse the string in place and return it
}

int main(){
    printf("%s",strrev("dlrow"));
}