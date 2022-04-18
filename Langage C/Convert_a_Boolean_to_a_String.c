/* Problème Rank: 8 Kyu

Implémenter une fonction qui convertit la valeur booléenne donnée en sa représentation 
sous forme de chaîne.
Remarque : Seules les entrées valides seront fournies.
*/

#include <stdbool.h>
#include <stdio.h>

//The returned string should be statically allocated and it won't be freed
const char *boolean_to_string(bool b){
    if (b == true){ return "true"; }
    else { return "false";}
}

int main(){
    printf("%s",boolean_to_string(false) );
}