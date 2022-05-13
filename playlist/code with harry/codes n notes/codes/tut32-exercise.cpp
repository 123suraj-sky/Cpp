#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y = 10)
    {
        a = x;
        b = y;
    }
    void printNumber();
};

void Complex::printNumber()
{
    cout << "Your number is " << a << " + " << b << "i" << endl;
}

int main()
{
    Complex c1(4);
    c1.printNumber();
    return 0;
}