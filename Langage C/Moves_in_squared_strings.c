/* Problème Rank: 7 Kyu

DESCRIPTION:
This kata is the first of a sequence of four about "Squared Strings".

You are given a string of n lines, each substring being n characters long: For example:

s = "abcd\nefgh\nijkl\nmnop"

We will study some transformations of this square of strings.

Vertical mirror: vert_mirror (or vertMirror or vert-mirror)
vert_mirror(s) => "dcba\nhgfe\nlkji\nponm"
Horizontal mirror: hor_mirror (or horMirror or hor-mirror)
 hor_mirror(s) => "mnop\nijkl\nefgh\nabcd"
or printed:

vertical mirror   |horizontal mirror   
abcd --> dcba     |abcd --> mnop 
efgh     hgfe     |efgh     ijkl 
ijkl     lkji     |ijkl     efgh 
mnop     ponm     |mnop     abcd 
Task:
Write these two functions
and

high-order function oper(fct, s) where

fct is the function of one variable f to apply to the string s (fct will be one of vertMirror, horMirror)

Examples:
s = "abcd\nefgh\nijkl\nmnop"
oper(vert_mirror, s) => "dcba\nhgfe\nlkji\nponm"
oper(hor_mirror, s) => "mnop\nijkl\nefgh\nabcd"
Note:
The form of the parameter fct in oper changes according to the language. You can see each form according to the language in "Sample Tests".

Bash Note:
The input strings are separated by , instead of \n. The output strings should be separated by \r instead of \n. See "Sample Tests".
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sqrSize(char*);
char* vertMirror(char*);
char* horMirror(char*);

typedef char* (*generic_func_t) (char*);
char* oper(generic_func_t, char*);


char* vertMirror(char* strng) {
    int size = sqrSize(strng);
    // strng length is (sqrsz + 1) * sqrsz - 1
    char* vstr = malloc(strlen(strng));
    strcpy(vstr, strng);
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            vstr[i * (size + 1) + j] = strng[(i + 1) * (size + 1) - 2 - j];
        }
    }
    return vstr;
}


char* horMirror(char* strng) {
    int size = sqrSize(strng);
    char* hstr = malloc(strlen(strng));
    strcpy(hstr, strng);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            hstr[i * (size + 1) + j] = strng[(size - i - 1) * (size + 1) + j];
        }
    }
    return hstr;
}

char* oper(generic_func_t f, char* s) {
    return (*f)(s);
}

int sqrSize(char* strng) {
    int i = 0;
    while (strng[i] != '\n') {
        i++;
    }
    return i;
}