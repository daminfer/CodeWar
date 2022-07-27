/* Problème Rank: 7 Kyu

Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5.

Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example,

solve(["abode","ABc","xyzD"]) = [4, 3, 1]
See test cases for more examples.

Input will consist of alphabet characters, both uppercase and lowercase. No spaces.

Good luck!

If you like this Kata, please try:

Last digit symmetry

Alternate capitalization

*/

#include <stddef.h>

int countAlphaChars(const char *const string) {
  int output = 0;
  
  for(int i = 0; string[i] != '\0'; i++) {
    if(i == (string[i] - 'a') || i == (string[i] - 'A'))
      output++;
  }
  return output;
}

void alphabet_positions (size_t nb_words, const char *const words[nb_words], short positions[nb_words])
{
  for(int i = 0; i < nb_words; i++) positions[i] = countAlphaChars(words[i]);
}