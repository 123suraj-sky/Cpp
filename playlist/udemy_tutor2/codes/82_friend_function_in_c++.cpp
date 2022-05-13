#include <iostream>
using namespace std;

// "distance" with all small letters is reserved or something else b/c it is showing distance is ambigious

class Distance
{
private:
    int meter;

public:
    Distance() : meter(0) {}
    friend int addFive(Distance);
};

int addFive(Distance d)
{
    d.meter += 50;
    return d.meter;
}

int main()
{
    Distance d;
    cout << "Distance " << addFive(d) << endl;
    return 0;
}