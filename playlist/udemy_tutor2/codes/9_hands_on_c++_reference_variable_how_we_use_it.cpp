#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << "x = " << x << endl;

    int &ref = x;
    ref = 20;
    cout << "x = " << x << endl;

    x = 40;
    cout << "x = " << x << endl;

    return 0;
}