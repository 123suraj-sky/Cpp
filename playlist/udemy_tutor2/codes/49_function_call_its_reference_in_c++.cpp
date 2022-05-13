#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 100, b = 200;
    cout << "before swap" << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    swap(a, b);
    cout << "after swap" << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    return 0;
}