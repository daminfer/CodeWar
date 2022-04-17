/* Problème Rank: 7 Kyu

Simple, étant donné une chaîne de mots, renvoie la longueur du ou des mots les plus courts.
La chaîne ne sera jamais vide et vous n'avez pas besoin de tenir compte des différents types de données.

*/

#include <sys/types.h>
#include <string.h>
#include <stdio.h>

ssize_t find_short(const char *s){

    // Initialisation:
    ssize_t compt = 0;
    ssize_t var = strlen(s);

    // Parcour chaine s:
    for (int i = 0; i < strlen(s); i++){

        if (s[i] == ' '){
            if ((compt < var) && (compt != 0) ){var = compt;}
            
            compt = 0;
            printf("SAUT !\n");
        }
        else{
            printf("var: %d et compt: %d et s[i] = %c\n",var, compt, s[i]);
            compt++;
        }
    }

    // Return:
    return var;
}

ssize_t find_short_correction(const char *s){
    int i, count = 0;
    ssize_t min = 100;
    for(i = 0; i < strlen(s) + 1; i++){
        count += 1;
        if(s[i] == ' ' || s[i] == '\0'){
            if(min > count - 1)
              (min = count - 1);
            count = 0;
        }
    }
    return min;
}

int main(){
    printf("%d",find_short("Let's travel abroad shall we") );
}