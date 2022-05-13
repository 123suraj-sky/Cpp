// copy constructor makes copy of another object

#include <iostream>
using namespace std;

class Number
{
    int a = 0;

public:
    Number() {} // default constructor
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj) // copy constructor
    {
        cout << "Copy constructor called" << endl;
        a = obj.a; // assign value passed to a which goes to z1
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2, z4 = z;
    x.display();
    y.display();
    z.display();
    
    // Example: // z1 should exactly resemble x
    Number z1(x); // copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not invoked as the object is already created. here only assignment is used
    z2.display();

    Number z3 = z; // copy constructor invoked as it is created in the same line
    z3.display();

    z4.display(); // copy constructor not invoked
    return 0;
}

/*

C++ compiler will allocate default copy constructor to every class

Even if we comment out copy constructor. Then also the above code will run.
    Number z1(x);
    z1.display(); --> displays 0

    Number z1(z);
    z1.display(); --> displays 45

*/