/* Problème Rank: 8 Kyu

Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

Examples (Input -> Output):
* "String"      -> "SSttrriinngg"
* "Hello World" -> "HHeelllloo  WWoorrlldd"
* "1234!_ "     -> "11223344!!__  "
Good Luck!

*/

#include <string.h>
#include <stdio.h>

char *double_char (const char *string, char *doubled){
    int pointeur = 0;
    for (int i = 0; i < strlen(string); i++){
        doubled[pointeur] = string[i];
        pointeur++;
        doubled[pointeur] = string[i];
        pointeur++;
    }
    
  doubled[pointeur] = '\0'; // write to doubled
  return doubled; // return it
}