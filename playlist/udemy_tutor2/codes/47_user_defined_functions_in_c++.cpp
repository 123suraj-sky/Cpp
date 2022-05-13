#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    int num1, num2, sum;
    cout << "Enter two number to add values:" << endl;
    cin >> num1 >> num2;
    sum = add(num1, num2);
    cout << "Sum is " << sum << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}