/* Problème Rank: 6 Kyu

The goal of this exercise is to convert a string to a new string 
where each character in the new string is "(" 
if that character appears only once in the original string, or ")" 
if that character appears more than once in the original string. 
Ignore capitalization when determining if a character is a duplicate.

Examples:

"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))(("

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

int occ(char *str, char c){
    int var = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (c == tolower(str[i])){
            var = var + 1;
        }
    }
    printf("%c est repeter %d\n",c,var);
    return var;
}

char *DuplicateEncoder(char *str){
    char *fullName = (char *) malloc( strlen(str)+ 1);
    int i = 0;
    for (; str[i] != '\0'; i++){
        if (occ(str ,tolower(str[i])) > 1){
            fullName[i] = ')';
        }
        else{
            fullName[i] = '(';
        }
    }
    fullName[i] = '\0';
    return fullName;
}

int main(){
    printf("%s",DuplicateEncoder("Prespecialized"));
}