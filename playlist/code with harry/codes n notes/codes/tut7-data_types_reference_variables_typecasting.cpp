#include <iostream>
using namespace std;

int c = 45;

int main()
{
    // *** Build in Data types ***
    // int a, b, c;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // c = a + b;
    // cout << "The sum is " << c << endl;
    // cout << "The global c is " << ::c << endl; // How to access global variable, we use scope resolution :: to get global variable

    // *** float, double and long double Literals ***
    // float d = 34.4f;
    // long double e = 34.4l;
    // // By default decimal literal is double
    // // Eg:- 34.4 by default treated as double
    // // But we can use 34.4f or 34.4F to make it float otherwise when we pass the value 34.4 even written as float d = 34.4 it passes as double
    // // Similarly 34.4l or 34.4L means long double
    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    // cout << "The value of d is " << d << endl;
    // cout << "The value of e is " << e << endl;

    // *** Reference Variables ***
    // float x = 455;
    // float &y = x;
    // cout << x << endl;
    // cout << y << endl;

    // *** TypeCasting ***
    // int a = 45;
    // float b = 45.46;
    // cout << "The value of a is " << (float)a << endl;
    // cout << "The value of a is " << float(a) << endl;
    // cout << "The value of b is " << (int)a << endl;
    // cout << "The value of b is " << int(a) << endl;
    // int c = int(b); // this is also valid
    // cout << "The expression is " << a + b << endl;
    // cout << "The expression is " << a + int(b) << endl;
    // cout << "The expression is " << a + (int)b << endl;


    return 0;
}