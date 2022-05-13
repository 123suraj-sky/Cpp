#include <iostream>
using namespace std;

class shape // base class
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

class paintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

class rectangle : public shape, public paintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main()
{
    rectangle rect;
    int area;
    rect.setHeight(6);
    rect.setWidth(10);
    area = rect.getArea();
    cout << "Total area: " << rect.getArea() << endl;
    cout << "Total cost: " << rect.getCost(area) << endl;
    return 0;
}