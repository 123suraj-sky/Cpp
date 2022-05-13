// There are two types of header files
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" // --> this will produce an error if this.h is not present in the current directory
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "This is Hello world program" << endl;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operatos
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << (float)a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // 4 --> firstly print the value of a i.e. 4 then increment it --> finally it print 4 and the value of a becomes 5
    cout << "The value of a-- is " << a-- << endl; // 5 --> now a is 5 and it prints a i.e. 5 and then decrecents a. So, now a is 4
    cout << "The value of ++a is " << ++a << endl; // 5 --> it says firstly increment a i.e. increment 4 to 5 and then prints a i.e. 5
    cout << "The value of --a is " << --a << endl; // 4 --> here firstly decrement a i.e. 5 to 4 and then prints 4 as output

    // Assignment Operators --> used to assign values to variables
    // int a = 3, b= 9;
    // char d  = 'd';

    // Comparison operatos
    cout << "\n\nThe value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;

    // Comparison operatos
    cout << "\n\nThe value of ((a == b) && (a < b)) logical operator is " << ((a == b) && (a < b)) << endl; // logical AND
    cout << "The value of ((a == b) || (a < b)) logical operator is " << ((a == b) || (a < b)) << endl; // logical OR
    cout << "The value of !(a == b) logical operator is " << !(a == b) << endl; // logical OR
    

    return 0;
}