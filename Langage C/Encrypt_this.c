/* Problème Rank: 6 Kyu

Acknowledgments:
I thank yvonne-liu for the idea and for the example tests :)

Description:
Encrypt this!

You want to create secret messages which can be deciphered by the Decipher this! kata. Here are the conditions:

Your message is a string containing space separated words.
You need to encrypt each word in the message using the following rules:
The first letter must be converted to its ASCII code.
The second letter must be switched with the last letter
Keepin' it simple: There are no special characters in the input.
Examples:
encrypt_this("Hello") == "72olle"
encrypt_this("good") == "103doo"
encrypt_this("hello world") == "104olle 119drlo"

*/

// Correction:

#include <string.h>
#include <stdlib.h>

char *encrypt_this(const char *str)
{
    char *dst = (char*)calloc((strlen(str)*3)+1, sizeof(char));
    char *dst_start = dst;
    while(*str)
    {
        for(;*str == ' '; ++str);
        if (*str == 0)
            break;

        sprintf(dst, "%d", *str++);
        for(;*dst != 0; ++dst);

        char *second = dst;
        for(; *str != ' ' && *str != 0; ++str)
            *dst++ = *str;

        if (dst > second)
        {
            char c = *second;
            *second = *(dst-1);
            *(dst-1) = c;
        }
        *dst++ = *str;
    }
    --dst;
    for(;*dst == ' '; *dst-- = 0);
    return dst_start;
}