#include <iostream>
using namespace std;

int car()
{
    string car[3];
    car[0] = "bmw";
    car[1] = "audi";
    car[2] = "honda";

    int qt_cars[3] = {3, 4, 13}; // quantity of cars

    cout << car[0] << endl;
    cout << "Total number of cars is " << qt_cars[0] + qt_cars[1] + qt_cars[2] << endl;
    return 0;
}

int main()
{
    car();
    return 0;
}