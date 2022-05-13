#include <iostream>
using namespace std;

// known as polymorphism because there are different output for different conditions

class add
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};

int main()
{
    add ad;
    cout << "output-1 = " << ad.sum(10, 50) << endl;
    cout << "output-2 = " << ad.sum(10, 50, 40) << endl;
    return 0;
}