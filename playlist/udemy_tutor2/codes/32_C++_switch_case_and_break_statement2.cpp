#include <iostream>
using namespace std;

int main()
{
    // break
    for (int n = 1; n <= 5; n++)
    {
        cout << "*" << endl;
        if (n == 2)
        {
            break;
        }
    }


    // continue
    int n = 1;
    while (n < 10)
    {
        if (n == 5)
        {
            n++;
            continue;
        }
        cout << "n = " << n << endl;
        n++;
    }

    return 0;
}