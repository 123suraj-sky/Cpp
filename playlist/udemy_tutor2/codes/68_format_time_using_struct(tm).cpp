#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);

    cout << "Numbe of sec since january 1, 1970 is " << now << endl;

    tm *ltm = localtime(&now);

    cout << "Year " << 1970 + ltm->tm_year << endl;
    cout << "month " << 1 + ltm->tm_mon << endl;
    cout << "day " << ltm->tm_mday << endl;
    cout << "time " << 1 + ltm->tm_hour << endl;
    cout << 1 + ltm->tm_min << endl;
    cout << 1 + ltm->tm_sec << endl;
    return 0;
}