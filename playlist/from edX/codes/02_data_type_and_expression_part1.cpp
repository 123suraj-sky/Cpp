#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;

int main()
{
    int days_traveled;
    int fullWeeks, remainingDays;
    cout << "Please enter number of days you travelled:" << endl;
    cin >> days_traveled;

    fullWeeks = days_traveled / DAYS_IN_A_WEEK;
    remainingDays = days_traveled % DAYS_IN_A_WEEK;

    cout << days_traveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days " << endl;
    return 0;
}