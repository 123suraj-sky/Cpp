#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number, square_root;
    cout << "Enter a number: ";
    cin >> number;
    square_root = sqrt(number);
    cout << "Square root of " << number << " is " << square_root << endl;
    cout << "Sinh of " << number << " is " << sinh(number) << endl;
    int temp = M_PI; // why it is showing error?
    cout << "Sin of " << number << " is " << sin(number) << " isfinite " << isfinite(temp) << endl;

    return 0;
}