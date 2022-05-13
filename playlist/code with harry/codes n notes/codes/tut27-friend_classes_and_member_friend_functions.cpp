#include <iostream>
using namespace std;

// Forward declaration
class Complex; // it means class Complex is present in this code below
// as program runs from top to bottom, so we have to give assurance to compiler that complex class is present. so, don't throw error

class Calculator // we have to define calculator class before complex class. So that the compiler know about what to do with calculator class and don't throw error
// as in class Calculator, sumComplex function is defined which is from Complex class
// we don't use a class which is not defined yet i.e. here we are using sumComplex funciotn from Complex class which is not declared yet
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // If we declare the below function here it will throw (although it know about Complex class) but the compiler don't know about o1.a and o2.a i.e. compiler don't know what is "a" here
    // So, for that we define the function after complex class and here we only declare the function
    // int sumComplex(Complex o1, Complex o2)
    // {
    //     return (o1.a + o2.a);
    // }
    int sumRealComplex(Complex, Complex);
    // we don't use it like
    // int sumComplex(Complex o1.a, Complex o2.a)
    // b/c again compiler don't know about "a" yet

    int sumCompComplex(Complex, Complex); // for sum of complex part
};

class Complex
{
    int a, b;

    // Individually declaring functions as friend
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2); // give acces to sumRealComplex from Calculator class
    // friend int Calculator::sumCompComplex(Complex o1, Complex o2); // give acces to sumCompComplex from Calculator class

    // Aliter: Declaring the entire Calculator class as friend
    friend class Calculator; // Friend class --> make whole class friend

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res1 = calc.sumRealComplex(o1, o2);
    int res2 = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res1 << endl;
    cout << "The sum of imaginary part of o1 and o2 is " << res2 << endl;

    return 0;
}