/* Problème Rank: 6 Kyu

La transposition simple est une technique de cryptographie basique et simple.
Nous faisons 2 rangées et mettons d'abord une lettre dans la rangée 1, la deuxième dans la rangée 2,
la troisième dans la rangée 1 et ainsi de suite jusqu'à la fin.
Ensuite, nous plaçons le texte de la ligne 2 à côté du texte de la ligne 1 et c'est tout.

Complétez la fonction qui reçoit une chaîne et cryptez-la avec cette simple transposition.

Exemple: si le texte à chiffrer est "Simple text", les 2 lignes seront :

Row 1	S	m	l		e	t
Row 2	i	p	e	t	x

Ainsi, la chaîne de résultat sera : `"Sml etipetx"`
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Je ne comprend pas pourquoi ma fonction ne passe pas les test alors qu'ici tout marche !
// Problème Résolue !!! => Ne jamais oublier les '\0' a la fin des chaînes de caractère !

char *simple_transposition(const char *s){
    // Initialisation:
    int i = 0;
    int x1 = 0;
    int x2 = 0;
    int n = strlen(s);
    char *tab1 = (char *) malloc(n * sizeof(char)); // On concatene sur tab1 donc ça taille est de n.
    char *tab2 = (char *) malloc(n * sizeof(char));

    // Création des deux tableaux:
    while (s[i] != '\0'){
        if ( i % 2 == 0){
            tab1[x1] = s[i];
            x1++;
        }
        else{
            tab2[x2] = s[i];
            x2++;
        }
        i++;
    }

    // On termine les chaînes de caractère:
    tab1[x1] = '\0';
    tab2[x2] = '\0';
    printf("Avant la concatenation = %s\n", tab1);
    printf("Avant la concatenation = %s\n", tab2);

    // Concaténation des tableaux:
    strcat(tab1, tab2);
    tab1[n] = '\0';
    printf("Apres la concatenation = %s\n", tab1);

    // On libère l'espace allouer et on retroune tab1:
    free(tab2);
    return tab1;
}

char *Correction_simple_transposition(const char *s)
{
    int n = strlen(s);
    char * s1 = (char *)malloc(n + 1);
    int pos = 0;
    for (int i = 0; i < n; i += 2)
      {
        s1[pos] = s[i];
        pos++;
      }

    for (int i = 1; i < n; i += 2)
      {
        s1[pos] = s[i];
        pos++;
      }

    s1[n] = '\0';
    return s1;
}

int main(){
    if (simple_transposition("The better part of valor is discretion") != "Tebte ato ao sdsrtoh etrpr fvlri icein"){ printf("yes !");}
}