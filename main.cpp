#include <iostream>
#include "SumSquares.h"

using namespace std;

int main()
{
    int testValues[] = {0, 5, 9};

    for (int i = 0; i < 3; i++)
    {
        int num = testValues[i];
        int result = SumSquares::sumSquares(num);

        cout << "sumSquares(" << num << ") = " << result << endl;
    }

    return 0;
}
