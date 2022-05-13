#include <iostream>
#include <cmath> // similar to math.h in c
using namespace std;

int main()
{
    cout << 5.5 + 9 << endl;
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5) * 10 << endl;
    cout << (float)5 / 7 << endl;
    cout << 5.0 / 7 << endl;
    cout << 10 % 3 << endl; // throws out remainder

    int wnum = 5; // wnum is for whole number
    double dnum = 5.5; // dnum is for decimal number
    wnum++;
    wnum += 80;
    cout << wnum << endl;

    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << sqrt(.36) << endl;
    cout << round(5.6) << endl; // round the number
    cout << round(5.3) << endl; // round the number
    cout << ceil(5.3) << endl; // act as L.I.F i.e. least integer fucntion
    cout << ceil(-5.3) << endl; // act as L.I.F i.e. least integer fucntion
    cout << floor(5.3) << endl; // act as G.I.F i.e. greatest integer fucntion
    cout << floor(-5.3) << endl; // act as G.I.F i.e. greatest integer fucntion
    cout << fmax(3, 10) << endl; // it tells us which number is bigger
    cout << fmin(3, 10) << endl; // it tells us which number is smaller

    return 0;
}