/* Problème Rank: 6 Kyu

Définition (primaire d'un nombre)
Est similaire à la factorielle d'un nombre,
Dans le primorial, tous les nombres naturels ne sont pas multipliés, 
seuls les nombres premiers sont multipliés pour calculer le primorial d'un nombre.
Il est noté P # et c'est le produit des n premiers nombres premiers.

Exemples d'entrée >> de sortie :
numPrimorial (3) ==> return (30)
*/

#include <stdio.h>

unsigned long long num_primorial(unsigned n){
    // Initialisation:
    unsigned compteur = 0; // condition de fin.
    unsigned long long value = 2; // Enumération de nombre, afin de trouver les nombres premiers parmis eux.
    int test = 0; // Test si Value est premier => test = 2
    unsigned long long finale = 0; // La valeur primaire d'un nombre

    // Parcours:
    while (compteur != n){

        // On test si value est premier:
        printf("Value = %llu\n",value);
        for (int i = 0; i < value; i++){
            printf("i = %d\n",i);
            if ( (value % i) == 0){test++;}
        }
        printf("Fin de boucle\n");
        if (test == 2){
            // Si value est premier on le multiplie a finale:
            
            finale = finale * value;
            printf("Finale = %llu\n",finale);
            compteur++;
            test = 0;
            value++;
        }
        else{
            // Si value n'est pas premier on pass:
            test = 0;
            value++;
        }   
    }

    // Retour:
    return finale;
}

// Correction:

unsigned long long num_primorial(unsigned n)
{
    int flag;
    unsigned long long b = 1,a = 1;
    
    for (int c = 2; a <= n; c++) 
    {
      flag = 1;
      for (int d = 2; d <= c / 2 && flag == 1; d++) 
        if (c % d == 0)flag = 0;
      if (flag == 1) 
      {
        b *= c;
        a++;
      }
    }
    return b;
}

int main(){
    // On voit l'erreur -> "value % test" -> need explain ...
    unsigned long long value = 2;
    int test = 0;
    printf("lancement:");
    if (value % test)
    {
        printf("ok");
    }
    printf("pas ok");
    printf("%llu\n", num_primorial(3));
}