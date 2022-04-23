/* Problème Rank: 7 Kyu

Créez une fonction qui renvoie la somme des deux nombres positifs les plus bas 
étant donné un tableau d'au moins 4 entiers positifs.
Aucun flottant ou entier non positif ne sera transmis.

Par exemple, lorsqu'un tableau est passé comme [19, 5, 42, 2, 77], la sortie doit être 7.

[10, 343445353, 3453445, 3453545353453] devrait revenir 3453455.
*/


#include <stddef.h>
#include <limits.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n])
{
    long small1 = INT_MAX, small2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < small1)
        {
            small2 = small1;
            small1 = numbers[i];
        } else if (numbers[i] < small2) small2 = numbers[i];
    }
    return small1 + small2;
}