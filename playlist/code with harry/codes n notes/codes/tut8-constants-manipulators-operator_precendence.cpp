#include <iostream>
#include <iomanip> // for setw() function
using namespace std;

int main()
{
    // constants in C++
    // const int a = 3;
    // cout << "The value of a was: " << a << endl;
    // // a = 45; // --> not possible as we are assigning read only variable
    // // cout << "The value of a is: " << a << endl;

    // Manipulators in C++
    // // 1) endl is a manipulator
    // // 2) setw() function from #include<iomanip>
    // //      --> setw(x) function is used for indentation
    // //      --> setw(x) function takes x bit spaces
    // //      --> where x is the number of spaces for indentation
    // //      --> we can also give arithematic operations to the x
    // //      --> it make the numbers right justified
    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a is: " << setw(4) << a << endl;
    // // cout << "The value of a is " << setw(2 + 2) << a << endl;
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl
    //      << endl;
    // cout << "The value of a without setw() is: " << a << endl;
    // cout << "The value of b without setw() is: " << b << endl;
    // cout << "The value of c without setw() is: " << c << endl;

    // Operator Precendence
    // // https://en.cppreference.com/w/cpp/language/operator_precedence
    // int a = 3, b = 4;
    // int c = a * 5 + b - 45 + 87;
    // // int c = ((((a * 5) + b) - 45) + 87); // product has precendence over +,- and associativity of +,- is left to right
    // cout << "c is " << c << endl;



    return 0;
}