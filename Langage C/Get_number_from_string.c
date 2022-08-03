/* Problème Rank: 8 Kyu

DESCRIPTION:

Write a function which removes from string all non-digit characters and parse the remaining to number.
E.g: "hell5o wor6ld" -> 56

Function:

getNumberFromString(s)

*/

int get_number_from_string(const char *src){
    int res = 0;
    while ( *src ){
        if ( *src >= '0' && *src <= '9' )
        res = res*10 + (*src - '0');
        src++;
    }
    return res;
}