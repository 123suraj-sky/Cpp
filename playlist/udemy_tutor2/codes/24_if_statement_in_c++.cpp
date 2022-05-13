#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0)
    {
        cout << "You enter a positive integer " << number << endl;
    }

    return 0;
}