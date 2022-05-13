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
    else if (number < 0)
    {
        cout << "You enter a negative integer " << number << endl;
    }
    else
    {
        cout << "You enter 0" << endl;
    }
    return 0;
}