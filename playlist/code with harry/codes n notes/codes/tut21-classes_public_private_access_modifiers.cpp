#include <iostream>
using namespace std;

/* 
Q) If structure is present in C, then what is the need of classes in C++?
A) --> Data hiding is not possible in structures
   --> We can't insert functions in structures
*/

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The vlaue of a is " << a << endl;
        cout << "The vlaue of b is " << b << endl;
        cout << "The vlaue of c is " << c << endl;
        cout << "The vlaue of d is " << d << endl;
        cout << "The vlaue of e is " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1) // "::" means scope resolution
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 134; // can't be directly accessed because a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1, 2, 4);
    harry.getData();
    return 0;
}