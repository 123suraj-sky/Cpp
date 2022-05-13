#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
    int d, e, f, g, h, i;
    d = a ^ b;
    e = b ^ c;
    f = a ^ c;
    g = a & b;
    h = b | c;
    cout << "d is " << d << endl;
    cout << "e is " << e << endl;
    cout << "f is " << f << endl;
    cout << "g is " << g << endl;
    cout << "h is " << h << endl;

    return 0;
}