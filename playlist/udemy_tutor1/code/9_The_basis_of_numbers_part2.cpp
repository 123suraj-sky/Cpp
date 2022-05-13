#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 169;
    double b = 56.7;
    double c = 95.45;
    double d = 87.23;

    double op1 = min(a, b); // min fucntion defined in cmath gives minimum of a and b
    double op2 = max(a, b); // max function defined in cmath gives maximum of a and b
    cout << op1 << endl;
    cout << op2 << endl;

    double x = a / b;
    double z = c + x / a + (b + c) * 9;
    cout << z << endl;

    double op3 = floor(z); // floor function act as its usage in math i.e. of greatest integer function or floor function
    cout << op3 << endl;

    double op4 = ceil(z); // ceil function act as its usage in math i.e. of least integer fucntion or ceil function
    cout << op4 << endl;

    double op5 = round(z); // round function act as its usage in math i.e. rounding a number
    cout << op5 << endl;

    double op6 = pow(b, 3); // similar as in C language
    cout << op6 << endl;

    double op7 = sqrt(a); // similar as in C language
    cout << op7 << endl;
    return 0;
}