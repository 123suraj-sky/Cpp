#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise Ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet(); // It means if greet function is called it is derived from Base1
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D : public B
{
    int a;

public:
    // D's new say method will override base class's say() method
    void say() // if the function with the same name is derived then the function in derived class will dominate over function in base class
    {
        cout << "Hello World. I am Batman" << endl;
    }
};

int main()
{
    // Ambiguity type 1
    // Base1 base1obj;
    // Base2 base2obj;
    // Derived d;
    // base1obj.greet();
    // base2obj.greet();
    // d.greet();

    // Ambiguity type 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}