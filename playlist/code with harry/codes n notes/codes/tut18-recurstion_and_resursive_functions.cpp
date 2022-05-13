#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
    // n! = n * (n - 1)!
}
/*
step by step calculation of 4!
factorial(4) = 4 * factorial(3);
factorial(4) = 4 * 3 * factorial(2);
factorial(4) = 4 * 3 * 2 * factorial(1);
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24;
*/

int fib(int n)
{
    if (n < 2)
        return 1; // returns 1 for position 0, 1 & 2
    else          // no need to write else in this case
        return fib(n - 2) + fib(n - 1);
}
// Fibonacci Sequence --> 1, 1, 2, 3, 5, 8, ...
// Position -->           0, 1, 2, 3, 4, 5, ...

int main()
{
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    // cout << "The factorial of " << a << " is " << a << "! = " << factorial(a) << endl;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}