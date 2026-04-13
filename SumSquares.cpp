#include "SumSquares.h"

// Recursive function to compute sum of squares from 0 to num
int SumSquares::sumSquares(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num * num) + sumSquares(num - 1);
    }
}
