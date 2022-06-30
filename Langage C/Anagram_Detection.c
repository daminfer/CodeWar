/* Problème Rank: 7 Kyu

An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

Note: anagrams are case insensitive

Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

Examples:

"foefet" is an anagram of "toffee"
"Buckethead" is an anagram of "DeathCubeK"

*/

#include <ctype.h>
#include <string.h>

#include <stdio.h>

int is_anagram(const char *test, const char *original);

int is_anagram(const char *test, const char *original){
    int acc = 0;
    if(strlen(test) != strlen(original)) return 0;
    for (int i = 0; original[i] != '\0' ; i++){
        acc = acc + ((int) tolower(original[i])) - ((int) tolower(test[i]));
        
    }
    if (acc == 0){ return 1;}
    else{ return 0;}

}

int main(){
    char test[] = "Creative";
    char original[] = "Reactive";
    if (is_anagram(test, original)){ printf("Vrai");}
    else{ printf("false");}
}