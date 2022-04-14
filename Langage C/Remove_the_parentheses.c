/* Problème Rank: 6 Kyu


Supprimer les parenthèses
Dans ce kata on vous donne une chaîne par exemple : "example(unwanted thing)example"

Votre tâche consiste à supprimer tout ce qui se trouve à l'intérieur des parenthèses,
ainsi que les parenthèses elles-mêmes.

L'exemple ci-dessus renverrait :

"example(unwanted thing)example" => "exampleexample"

En dehors des parenthèses, seules des lettres et des espaces peuvent apparaître dans la chaîne.
Ne vous inquiétez pas des autres parenthèses comme "[]"et "{}"car celles-ci n'apparaîtront jamais.
Il peut y avoir plusieurs parenthèses. Les parenthèses peuvent être imbriquées.
*/


// do not allocate memory for return value
// assign to the provided pointer *str_out

#include <stdio.h>

void remove_parentheses(const char *str_in, char *str_out) {

    int test = 0;
    int pointeur = 0;
    for (int i = 0; str_in[i] != '\0'; i++){

        if (str_in[i] == '('){test++;}
        else if (str_in[i] == ')'){test--;}

        else if (test <= 0){
            str_out[pointeur] = str_in[i];
            test = 0;
            pointeur++;
        }
    }
    str_out[pointeur] = '\0';
    printf("%s\n",str_out);
}

int main(){
    remove_parentheses("example(unwanted thing)example", "example(unwanted thing)example");
}