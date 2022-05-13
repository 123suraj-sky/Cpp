#include <iostream>
using namespace std;

int main()
{
    int num1 = 30, num2 = 40;
    
    if (num1 >= 40 || num2 >= 40)
    {
        cout << "or if block get executed" << endl;
    }
    if (num1 >= 20 && num2 >= 20)
    {
        cout << "and if block get executed" << endl;
    }
    if (!(num1 >= 40))
    {
        cout << "not if block get executed" << endl;
    }
    
    return 0;
}