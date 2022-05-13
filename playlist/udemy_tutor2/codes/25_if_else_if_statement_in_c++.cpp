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
    else
    {
        cout << "You enter a negative integer" << endl;
    }
    
    return 0;
}