#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a spicial member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked(call or execute) whenever an object is created
    Complex(void); // Constructor declaration
    // name should be same as of class name
    // if name is different then we get a warning: "no return statement in function returning non-void" b/c retrun type should be specifed.

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor definition
Complex ::Complex() // --> This is a default constructor as it accepts no parameter
{
    a = 0;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

/* 
Characteristics of Constructors:-
1) A constructor which does not accept any parameters k/a default constructor.
2) It should be declared in the public section of the class
3) They are automatically invoked whenever the object is created
4) They cannot return values and do not have return types not even void
5) It can have default arguments --> give any values it will become default if it is not passed
6) We cannot refer to their address
*/