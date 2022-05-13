#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "sum is " << endl
         << sum(3, 4) << endl;

    return 0;
}