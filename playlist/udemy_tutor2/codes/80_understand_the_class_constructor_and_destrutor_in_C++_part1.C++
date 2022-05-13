#include <iostream>
using namespace std;

// constructor have no return type not even void
// declaration of constructor and destructor is same as of class

class line
{
public:
    void setLength(double len);
    double getLength(void);
    line(); // constructor

private:
    double length;
};

line ::line(void) // here first line is scope resolution of second line
{
    cout << "Object is being created" << endl;
}

void line::setLength(double len)
{
    length = len;
}

double line::getLength(void)
{
    return length;
}

int main()
{
    line line1;
    line1.setLength(6);
    cout << "Length of line " << line1.getLength() << endl;
    return 0;
}