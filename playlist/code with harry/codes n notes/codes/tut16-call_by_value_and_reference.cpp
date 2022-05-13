#include <iostream>
using namespace std;

// This will not swap a and b
// void swap(int a, int b)
// {                 // temp a b
//     int temp = a; //   4  4 5
//     a = b;        //   4  5 5
//     b = temp;     //   4  5 4
// }

// Call by reference using pointers
// void swapPointer(int *a, int *b)
// {                  // temp a b
//     int temp = *a; //   4  4 5
//     *a = *b;       //   4  5 5
//     *b = temp;     //   4  5 4
// }

// Call by reference using C++ reference variables
// void swapReferenceVar(int &a, int &b)
// {                 // temp a b
//     int temp = a; //   4  4 5
//     a = b;        //   4  5 5
//     b = temp;     //   4  5 4
// }

// Return reference variable
int &swapReferenceVar1(int &a, int &b) // it is returning reference to a
{                 // temp a b
    int temp = a; //   4  4 5
    a = b;        //   4  5 5
    b = temp;     //   4  5 4
    return a;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // copy of x and y is send to function
    // swapPointer(&x, &y); // This will swap x and y using pointer reference
    // swapReferenceVar(x, y); // This will swap x and y using reference variables
    swapReferenceVar1(x, y) = 766; // This will assign value of x to 766
    cout << "After swap function\nThe value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}