#include <iostream>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "The function returned " << add(a, b) << endl;

    return 0;
}