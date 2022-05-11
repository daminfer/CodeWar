/* Problème Rank: 8 Kyu

Create a function which answers the question "Are you playing banjo?".
If your name starts with the letter "R" or lower case "r", you are playing banjo!

The function takes a name as its only argument, and returns one of the following strings:

name + " plays banjo" 
name + " does not play banjo"
Names given are always valid strings.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *are_you_playing_banjo(const char *name) {
    size_t l = strlen( name) + 1;
    char *finale = (char *) malloc(l * sizeof(char));
    if (tolower(name[0]) == 'r'){
        finale = (char *) realloc(finale, l + strlen(" plays banjo")+1);
        strcpy(finale, name);
        strcat(finale, " plays banjo");
    }
    else{
        finale = (char *) realloc(finale, l + strlen(" does not play banjo")+1);
        strcpy(finale, name);
        strcat(finale, " does not play banjo");
    }
    printf("%s", finale);
    
	return finale; // memory will be freed
}

char *are_you_playing_banjo_2(const char* n) {
  char *r = (char*)calloc(strlen(n) + 20, 1);
  strcpy(r, n);
  strcat(r, (n[0] == 'R' || n[0] == 'r') ? " plays banjo" : " does not play banjo");
  return r;
}

int main(){
    const char *name = "Robert";
    are_you_playing_banjo(name);
}