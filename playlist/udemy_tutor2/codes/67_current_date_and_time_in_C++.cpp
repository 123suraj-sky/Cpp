#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0); // This will get the current time and date on the system --> since january 1st 1997
    // If the system has no time then it will return 1
    char *dt = ctime(&now);

    cout << "The local date and time is " << dt << endl;

    tm *gmtm = gmtime(&now); // this will store the time for the struct tm
    dt = asctime(gmtm); // gives time G.M.T

    cout << "This UTC  date and time is " << dt << endl;

    return 0;
}