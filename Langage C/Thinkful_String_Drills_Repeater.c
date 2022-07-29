/* Problème Rank: 7 Kyu

Write a function named repeater() that takes two arguments (a string and a number), 
and returns a new string where the input string is repeated that many times.

Example: (Input1, Input2 --> Output)
"a", 5 --> "aaaaa"
*/

#include <stdlib.h>
#include <string.h>

char* repeater(const char* strin, int n) {

    // <---- hajime!
    char *New = (char *) malloc((n+1)*strlen(strin) * sizeof(char));
    int i = 0;
    int j = 0;
    for (; i < n; i++){
        for (int x = 0; x < strlen(strin); x++){
            New[j] = strin[x];
            j++;
        }
        i++;
    }
    New[j] = '\0';
    return New;
}

#include <stdlib.h>
#include <string.h>

char* repeater_corr(const char* strin, int n) {
    char* submit = (char*) calloc(strlen(strin) * n, sizeof(char*));
    for(int i = 0; i < n; i++) strncat(submit, strin, strlen(strin));
    return submit;
}