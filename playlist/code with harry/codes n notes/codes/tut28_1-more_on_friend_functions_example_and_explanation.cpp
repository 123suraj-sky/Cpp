// This function exchange the private members of class C1

#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &); // friend function can be declared in private as well as public

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << "val1 is " << val1 << endl;
    }
};

class c2
{
    int val2;

public:
    friend void exchange(c1 &, c2 &); // friend function can be declared in private as well as public
    void inData(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << "val2 is " << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y) // call by reference
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(34);
    oc2.inData(67);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}