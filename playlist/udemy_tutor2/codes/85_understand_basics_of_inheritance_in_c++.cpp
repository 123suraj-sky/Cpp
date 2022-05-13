#include <iostream>
using namespace std;

class test
{

private:
    int x;

public:
    void setX(int x)
    {
        this->x = x; // this pointer is used to show retrive the object hidden by x from variable x in private
    }

    void print()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    test tst;
    int x = 30;
    tst.setX(x);
    tst.print();

    return 0;
}