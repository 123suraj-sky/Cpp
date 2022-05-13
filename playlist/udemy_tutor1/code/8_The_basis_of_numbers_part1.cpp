#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 34;
    double b = 56.7;
    double c = 95.45;
    double d = 87.23;

    // double x = a + b;
    // cout << x << endl;

    // int y = a / b;
    double x1 = a / b;
    cout << x1 << endl;

    double x = a / b;
    double y = c * d;
    double z = c + x / a + (b + c) * 9;
    cout << z << endl;
    return 0;
}