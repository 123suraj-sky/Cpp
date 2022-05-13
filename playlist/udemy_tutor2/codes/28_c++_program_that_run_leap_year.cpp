#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) // years perfectly divided by 4 are leap year expect for century year
    {
        if (year % 100 == 0) // century years
        {
            if (year % 400 == 0) // century years divisible by 4
            {
                cout << year << " is a leap year" << endl;
            }
            else
            {
                cout << year << " is not a leap year" << endl;
            }
        }
        else
        {
            cout << year << " is a leap year" << endl;
        }
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}