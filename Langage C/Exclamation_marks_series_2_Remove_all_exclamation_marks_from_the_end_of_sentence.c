/* Problème Rank: 8 Kyu

Description:

Remove all exclamation marks from the end of sentence.

Examples:

remove("Hi!") === "Hi"
remove("Hi!!!") === "Hi"
remove("!Hi") === "!Hi"
remove("!Hi!") === "!Hi"
remove("Hi! Hi!") === "Hi! Hi"
remove("Hi") === "Hi"

*/

#include <string.h>
#include <stdio.h>

char *remove_marks (const char *str_in, char *str_out){

    int i,j;
    for(i = strlen(str_in);i >0;i--){
        if (str_in[i-1] != '!') break;
    
    }
    
    for (j = 0;j < i;j++){
        str_out[j] = str_in[j];
    }
    
    // str_out is as large as str_in
    str_out[j] = '\0'; // write to str_out
    return str_out; // return it
}