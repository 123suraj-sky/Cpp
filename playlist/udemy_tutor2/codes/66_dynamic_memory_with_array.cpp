#include <iostream>
using namespace std;

int main()
{
    int length, sum = 0;
    cout << "Enter the number of the students in the group: ";
    cin >> length;
    int *marks = new int[length];
    cout << "Enter the marks of the students:" << endl;

    for (int i = 0; i < length; i++)
        cin >> *(marks + i);

    for (int i = 0; i < length; i++)
        sum += *(marks + i);

    cout << "Sum is " << sum << endl;

    return 0;
}