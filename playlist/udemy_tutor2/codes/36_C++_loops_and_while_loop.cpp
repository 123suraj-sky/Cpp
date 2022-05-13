#include <iostream>
using namespace std;
int main()
{
    int number, i = 1, fact = 1; // fact for factorial
    cout << "Enter a positive integer: ";
    cin >> number;
    while (i <= number)
    {
        fact *= i;
        ++i;
    }
    cout << "Factorial of " << number << " is " << fact << endl;
    return 0;
}
