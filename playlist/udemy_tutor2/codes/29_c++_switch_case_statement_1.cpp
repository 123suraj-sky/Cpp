#include <iostream>
using namespace std;

int main()
{
    char o;
    float num1, num2;
    cout << "Enter an operator(+, -, *, /): ";
    cin >> o;
    cout << "Enter two operands" << endl;
    cin >> num1 >> num2;
    switch (o)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;

    default:
        cout << "Error no operator match in this program" << endl;
        break;
    }

    return 0;
}