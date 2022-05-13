#include <iostream>
using namespace std;

struct Distance // type stuctre
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;
    ptr = &d;
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter ince: ";
    // cin >> (*ptr).inch;  // both are same
    cin >> d.inch; // both are same

    cout << "Displaying information" << endl;
    cout << "distance = " << (*ptr).feet << " feet = " << (*ptr).inch << " inches" << endl;

    return 0;
}