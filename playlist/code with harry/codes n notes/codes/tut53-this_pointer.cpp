#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // void setData(int a)
    // {
    //     this->a = a; // 'this' is a pointer which points to that object 'a' for which the member function setData is running initialized in private equal to 'a' in setData function
    //     // if we don't use 'this' pointer in this place we get a garbage value
    // }

    A &setData(int a)
    {
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // This is a keyword is a pointer which points to the objects which invokes the member function
    // Other use of 'this' function is it can return the object for which the member function is running --> We can write return *this to get a (initialized in private) and its syntax is also written in code
    A a;
    // a.setData(4);
    // a.getData();
    a.setData(4).getData();
    // a.setData(5).getData();

    return 0;
}