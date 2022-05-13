#include <iostream>
using namespace std;

int main()
{
    int var = 20;
    int *ip;
    ip = &var;

    cout << "Value of var variable is " << var << endl;
    cout << "Value of var variable is " << *ip << endl;
    cout << "Address of var variable is " << &var << endl;
    cout << "Address of var variable is " << ip << endl;

    return 0;
}