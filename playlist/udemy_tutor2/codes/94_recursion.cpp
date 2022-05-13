#include <iostream>
using namespace std;

int factorial(int);
int main()
{
    int n;
    cout << "Enter a number to find a factorial" << endl;
    cin >> n;
    cout << "Factorial of " << n << " = " << n << "! = " << factorial(n) << endl;
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}