#include <iostream>
#include <cmath>
using namespace std;

class B;

class A
{
    int x1, y1;

public:
    void setValueX(int val1)
    {
        x1 = val1;
    }
    void setValueY(int val2)
    {
        y1 = val2;
    }
    friend void distance(A, A, B, B);
};

class B
{
    int x2, y2;

public:
    void setValueX(int val1)
    {
        x2 = val1;
    }
    void setValueY(int val2)
    {
        y2 = val2;
    }
    friend void distance(A, A, B, B);
};

void distance(A x_1, A y1, B x2, B y2)
{
    int dist = sqrt(pow(x_1.x1 - x2.x2, 2) + pow(y1.y1 - y2.y2, 2));
    cout << "distance is " << dist << endl;
}

int main()
{
    A point1x, point1y;
    B point2x, point2y;

    point1x.setValueX(1);
    point1y.setValueY(4);
    point2x.setValueX(4);
    point2y.setValueY(1);

    distance(point1x, point1y, point2x, point2y);

    return 0;
}