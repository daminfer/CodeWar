/* Problème Rank: 8 Kyu

You'll be given a string, and have to return the sum of all characters as an int. 
The function should be able to handle all ASCII characters.

examples:

uniTotal("a") == 97 uniTotal("aaa") == 291

*/

#include <string.h>

int uni_total(const char *s) {
    int result = 0;
    for (int i = 0; i < (int)strlen(s); ++i)
        result += (int)s[i];

    return  result;
}