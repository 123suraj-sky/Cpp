#include <iostream>
using namespace std;

extern int a, b;
extern int c;
extern float f;

int main()
{
    // int z;
    // int i = 3;
    // cout << "The value of the variable: " << i << "/" << z << endl;

    int a, b;
    int c;
    float f;

    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;
    f = 90.0/30.1;
    cout << f << endl;
    return 0;
}