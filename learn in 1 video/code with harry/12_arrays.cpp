#include <iostream>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{

    int arr[3] = {1, 3, 6};
    cout << arr[1] << endl;

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of " << i << "th student" << endl;
        cin >> marks[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of " << i << "th student is "<< marks[i] << endl;
    }

    return 0;
}