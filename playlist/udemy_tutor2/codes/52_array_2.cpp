#include <iostream>
using namespace std;

int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value of n[" << i << "]: ";
        cin >> n[i];
    }
    for (int i = 0; i < 10; i++)
        cout << "Value of n[" << i << "] is " << n[i] << endl;

    return 0;
}