#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1" << endl; // '<<' is called as insertion operator
    cin >> num1;                               // '>>' is called as extraction operator

    cout << "Enter the value of num2" << endl; // '<<' is called as insertion operator
    cin >> num2;                               // '>>' is called as extraction operator

    cout << "The sum of num1 and num2 is " << num1 + num2 << endl;

    return 0;
}