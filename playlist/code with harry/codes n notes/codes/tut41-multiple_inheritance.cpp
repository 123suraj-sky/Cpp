#include <iostream>
using namespace std;

/*
Sytanx for inheriting in multiple inheriance
class derived:visibility-mode base1, visibility-mode base 2{
class body of class "derived"
};*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "The sum of these values is " << base1int + base2int + base3int << endl;
    }
};

/*
The inherited Derived class will look something like this:
Data members:
    1) base1int --> protected
    2) base2int --> protedted
Member function:
    3) set_base1int(int) --> public
    4) set_base2int(int) --> public
*/

int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();
    return 0;
}