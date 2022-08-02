/* Problème Rank: 8 Kyu

Write function parseFloat which takes an input and returns a number or Nothing if conversion 
is not possible.

*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct maybe_double {
    bool value_exists;
    double value;
};

struct maybe_double parse_float(const char *input) {
    struct maybe_double out;
    int pos;
    out.value_exists = 1 == sscanf(input, "%lf%n", &out.value, &pos) && pos == strlen(input);
    return out;
}