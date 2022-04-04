/* Problème Rank: 4 Kyu (First 4kyu)

Sudoku est un jeu qui se joue sur une grille 9x9.
Le but du jeu est de remplir toutes les cellules de la grille avec des chiffres de 1 à 9,
de sorte que chaque colonne, chaque ligne et chacune des neuf sous-grilles 3x3 (également appelées blocs)
contiennent tous les chiffres de 1 à 9.

Écrivez une fonction validSolution/ ValidateSolution/ valid_solution()
qui accepte un tableau 2D représentant un plateau de Sudoku, 
et renvoie vrai si c'est une solution valide, ou faux sinon.
Les cellules du tableau sudoku peuvent également contenir des 0, qui représenteront des cellules vides.
Les planches contenant un ou plusieurs zéros sont considérées comme des solutions invalides.

Le tableau est toujours composé de 9 cellules sur 9 cellules,
et chaque cellule ne contient que des nombres entiers de 0 à 9.

*/

#include <stdbool.h>
#define uint8 unsigned short


// Correction INSANE !

bool validSolution(unsigned int M[9][9]) {
  for (uint8 i = 0; i < 9; i++) {
    uint8 R[10] = {0},    // Row
          C[10] = {0},    // Col
          B[10] = {0};    // Box
    for (uint8 j = 0; j < 9; j++) {
      if (!M[i][j] || R[ M[i][j] ]++) return false;   // Row
      if (!M[j][i] || C[ M[j][i] ]++) return false;   // Col

      if (  !M[i/3 * 3 + j/3][i%3 * 3 + j%3]          // Box
        || B[M[i/3 * 3 + j/3][i%3 * 3 + j%3]]++) return false; 
    }
  }
  return true;
}