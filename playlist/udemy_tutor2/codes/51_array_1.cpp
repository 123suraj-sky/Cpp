#include <iostream>
using namespace std;

int main()
{
    int marks[3];
    float average;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> marks[i];
        average += marks[i]; // finding sum
    }

    average /= 3; // finding average
    cout << "Average marks is " << average << endl;
    return 0;
}