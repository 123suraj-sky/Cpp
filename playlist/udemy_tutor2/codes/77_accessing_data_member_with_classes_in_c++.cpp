#include <iostream>
using namespace std;

class box
{
public:
    double length;
    double breadth;
    double heigth;
};

int main()
{
    box box1;
    box box2;

    double volume = 0;

    box1.heigth = 10;
    box1.length = 6;
    box1.breadth = 7;

    box2.heigth = 10;
    box2.length = 13;
    box2.breadth = 14;

    volume = box1.heigth * box1.length * box1.breadth;
    cout << "Volume of box1 is " << volume << endl;

    volume = box2.heigth * box2.length * box2.breadth;
    cout << "Volume of box2 is " << volume << endl;
    return 0;
}