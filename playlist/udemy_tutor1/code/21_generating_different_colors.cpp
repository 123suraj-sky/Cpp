#include <iostream>
using namespace std;

string color(int col) // col for taking argument for color
{
    string colfull; // for name of color

    switch (col)
    {
    case 1:
        colfull = "red";
        break;
    case 2:
        colfull = "yellow";
        break;
    case 3:
        colfull = "blue";
        break;
    default:
        colfull = "wrong number";
        break;
    }
    return colfull;
}
int main()
{
    cout << color(1) << endl;
    return 0;
}