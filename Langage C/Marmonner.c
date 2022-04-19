/* Problème Rank: 7 Kyu

Cette fois pas d'histoire, pas de théorie.
Les exemples ci-dessous vous montrent comment écrire une fonction accum:

Exemples:

accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"

Le paramètre de accum est une chaîne qui ne comprend que des lettres de a..zet A..Z.
*/

#include <malloc.h>
#include <string.h>
#include <ctype.h>

char *accum(const char *source) {
  int len = strlen(source);
  char *str = (char*)malloc(len * (len + 1));
  int i = 0;

  for (int j = 0; j < len; j++, i++) {
    for (int k = 0; k < (j + 1); k++, i++) str[i] = !k ? toupper(source[j]) : tolower(source[j]);
    str[i] = '-';
  }
  str[i-1] = '\0';
  return str;
}

int main(){
    printf("Expected: %s\n", "Z-Pp-Ggg-Llll-Nnnnn-Rrrrrr-Xxxxxxx-Qqqqqqqq-Eeeeeeeee-Nnnnnnnnnn-Uuuuuuuuuuu");
    printf("Actual: %s\n", accum("ZpglnRxqenU"));
}