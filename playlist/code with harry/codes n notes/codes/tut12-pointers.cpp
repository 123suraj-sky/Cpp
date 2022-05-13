#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? --> data type which holds the address of other data types

    int a = 3;
    int *b = &a; // b is pointer to a
    /* 
    int *b ;
    b = &a;
    */

    // & --> Address of operator
    cout << "Address of a --> " << &a << endl;
    cout << "Address of a --> " << b << endl; // address of a

    // * --> Dereference operator
    cout << "The value at address b is " << *b << endl;
    cout << "The value at address b is " << a << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
    return 0;
}