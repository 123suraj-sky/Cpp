#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 150)
    {
        cout << "You can vote" << endl;
    }
    else if (age > 150)
    {
        cout << "Invalid age" << endl;
    }
    else
    {
        cout << "You cannot vote" << endl;
    }

    return 0;
}