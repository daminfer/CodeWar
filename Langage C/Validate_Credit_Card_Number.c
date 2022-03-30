/* Problème Rank: 6kyu
Dans ce Kata, vous implémenterez l'algorithme de Luhn, 
qui est utilisé pour aider à valider les numéros de carte de crédit.

Étant donné un nombre entier positif de 16 chiffres maximum, 
renvoie trues s'il s'agit d'un numéro de carte de crédit valide 
et falses s'il ne l'est pas.

Voici l'algorithme :

Doublez un chiffre sur deux, en balayant de droite à gauche,
en commençant par le deuxième chiffre (en partant de la droite).

Une autre façon de penser est la suivante : s'il y a un nombre pair de chiffres,
doublez tous les autres chiffres en commençant par le premier; 
s'il y a un nombre impair de chiffres, doubler un chiffre sur deux en commençant par le second:

1714 ==> [1*, 7, 1*, 4] ==> [2, 7, 2, 4]
12345 ==> [1, 2*, 3, 4*, 5] ==> [1, 4, 3, 8, 5]
891 ==> [8, 9*, 1] ==> [8, 18, 1]

Si un nombre résultant est supérieur à 9,
remplacez-le par la somme de ses propres chiffres (ce qui revient à en soustraire 9):

[8, 18*, 1] ==> [8, (1+8), 1] ==> [8, 9, 1]
or:
[8, 18*, 1] ==> [8, (18-9), 1] ==> [8, 9, 1]

Additionnez tous les derniers chiffres :
[8, 9, 1] ==> 8 + 9 + 1 = 18

Enfin, prenez cette somme et divisez-la par 10.
Si le reste est égal à zéro, le numéro de carte de crédit d'origine est valide.
18 (modulus) 10 ==> 8 , which is not equal to 0, so this is not a valid credit card number
*/


#include <stdbool.h>
#include <stdio.h>

bool validate(long double digits) {
    // Cette algo fonctionne, mais les test de code war sont caser !!!!!!!
    char tab[16];
    int test[16];
    int taille = 0;
    int Finale = 0;
    // Conversion digits en chaine de caractère:
    sprintf(tab, "%d", (unsigned int) digits);
    // Conversion chaine de caractère -> tableau int:
    for (int i = 0; tab[i] != '\0'; i++)
    {
        test[i] = tab[i] - '0';
        taille++;
        printf("test[%d] = %d\n", i, test[i]);
    }
    // Execution Algo:
    //taille = taille -1;
    printf("%d", taille);
    for (int i = 0; i < taille ; i++)
    {
        if ( (taille % 2 == 0) && (i % 2 == 0) ){ 
            test[i] = test[i] *2;
            if (test[i] > 9){ test[i] = test[i] - 9;}       
        }
        if ( (taille % 2 != 0) && (i % 2 != 0) ){
            test[i] = test[i] *2;
            if (test[i] > 9){ test[i] = test[i] - 9;}
        }
        Finale = Finale + test[i];
        printf("Finale[%d]: %d ",i,Finale);
    }
    // Test Finale:
    printf("\nFORME FINALE: %d\n", Finale);
    if (Finale % 10 == 0){return true;}
    else {return false;}    
}

bool correction_validate(long digits) 
{
    // Ouai pas dégeux !
    int sum = 0, j = 0;
    for (long n = digits; n; n /= 10){
        int d = n % 10;
        if (j++ % 2) d *= 2;
        if (d > 9) d -= 9;
        sum += d;
    }
    return sum % 10 == 0;
}

int main(){
    if (validate(1230) == true) printf("VRAI");
    else printf("FAUX");
}