#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thrusday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;

    default:
        // cout << "Invalid Input!" << endl;
        dayName = "Invalid day number";
        break;
    }

    return dayName;
}

int main()
{
    cout << getDayOfWeek(6) << endl;
    return 0;
}