#include <iostream>
using namespace std;

int main()
{
    void *ptr;
    float f = 2.3;
    ptr = &f;

    cout << "Address is " << &f << endl;
    cout << "Address is " << ptr << endl;

    return 0;
}