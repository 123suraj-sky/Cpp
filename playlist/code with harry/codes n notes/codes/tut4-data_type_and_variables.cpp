#include <iostream>
using namespace std;

int glo = 10; // global variable

void sum()
{
    int local;                                     // local variable
    cout << "global variable  is " << glo << endl; // here it prints 10 b/c global is not changed for this function
}

int main()
{
    // int a = 1;
    // int b = 5;
    
    int a = 1, b = 5;
    float pi = 3.14;
    char c = 'u';
    int glo = 9; // local have precendence over global variable. So, value of glo changes as local variable and value of glo as global variable remains same
    glo = 5;
    bool is_true = true;

    sum(); // when we call sum function first it check if any variable is present with global name if not then it print the global variable of name glboal i.e. having value 10

    cout << "global variable  is " << glo << endl;
    cout << "bool value is " << is_true << endl;
    cout << "This is tutorial 4\nHere the value of a is " << a << "\nThe value of b is " << b << endl;
    // '\n' is known as escape sequence character
    cout << "The value of pi is " << pi << endl;
    cout << "The value of c is " << c << endl;
    return 0;
}