#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); // here paranthesis for ptr is mandantory b/c precendence of '.' operator is higher than '*' operator
    // (*ptr).getData(); // here paranthesis for ptr is mandantory b/c precendence of '.' operator is higher than '*' operator

    // arrow operator --> runs the function to which pointer the pointer ptr is pointing
    ptr->getData(); // same as (*ptr).getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(12, 4);
    ptr1->getData();
    (ptr1 + 1)->setData(152, 44);
    (ptr1 + 1)->getData();

    return 0;
}