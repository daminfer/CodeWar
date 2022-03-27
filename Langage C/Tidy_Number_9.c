// Rank: 7kyu

#include <stdbool.h>

bool tidyNumber(int num)
{
    int left, right;
    for (right=9; num; num /= 10) {
        left = num % 10;
        if (left > right)
            return false;
        right = left;
    }
    return true;
}


