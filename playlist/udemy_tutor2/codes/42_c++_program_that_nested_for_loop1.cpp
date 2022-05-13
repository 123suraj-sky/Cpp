#include <iostream>
using namespace std;

int main()
{
    int i, j, chk = 0;
    for (i = 1; i < 100; i++) // nested loop allowed for at leat 256 loops
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                chk++;
                break;
            }
        }
        if (chk == 0 && i != 1)
            cout << i << " is prime" << endl;
        chk = 0;
    }

    return 0;
}