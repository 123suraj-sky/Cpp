#include <iostream>
using namespace std;
int main()
{
    float number, sum = 0;
    do
    {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    } while (number != 0);
    cout << "Total sum = " << sum << endl;

    return 0;
}