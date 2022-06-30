/* Problème Rank: 6 Kyu

Task:

You will be given an array of numbers. 
You have to sort the odd numbers in ascending order 
while leaving the even numbers at their original positions.

Examples:

[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]

*/

#include <stdlib.h>
// Temps écoulé ^^'
void sort_array(size_t n, int arr[n]) {
	// sort the contents of arr:
    char F[] = trie(arr);
    for (int i = 0; i < n; i++){
        if ((arr[i] % 2) + 1 == 0){
            for (int j = 0; j < n; j++){
                if ((F[j] % 2) + 1 == 0){
                    arr[i] = F[j];
                    break;
                }
            }
        }
    }
    return arr;
}

#include <stdlib.h>

void sort_array_cor(size_t n, int arr[n]) {
  if (n <= 0)
  {
    return;
  }
  
  for (size_t i = 0; i < n-1; ++i)
  {
    for (size_t j = i; j < n; ++j)
    {
      if ((arr[i] % 2 != 0) && (arr[j] % 2 != 0))
      {
        if (arr[i] > arr[j])
        {
          int temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
      }
    }
  }
}