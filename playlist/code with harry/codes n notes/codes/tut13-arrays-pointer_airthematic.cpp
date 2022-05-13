#include <iostream>
using namespace std;

int main()
{
    // Array Example
    // int marks[4] = {23, 45, 56, 89};
    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];
    int i = 0; // for while loop
    int j = 0; // for do-while loop
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    marks[2] = 455; // arrays values can be modified
    cout << "These are marks:" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // using for loop
    cout << "Using for loop:" << endl;
    for (int i = 0; i < 4; i++)
        cout << marks[i] << endl;

    // using while loop
    cout << "Using while loop:" << endl;
    while (i < 4)
    {
        cout << marks[i] << endl;
        i++;
    }

    // using do-while loop
    cout << "Using do-while loop:" << endl;
    do
    {
        cout << marks[j] << endl;
        j++;
    } while (j < 4);

    cout << "\nThese are math marks:" << endl;
    for (int i = 0; i < 4; i++)
        cout << mathMarks[i] << endl;

    // Pointers and Arrays
    int *p = marks;
    cout << *(p++) << endl; // p is incremented by 1
    cout << *(p) << endl;
    cout << *(++p) << endl;
    // cout << "The value of marks[0] = *p is: " << *p << endl;
    // cout << "The value of marks[1] = *(p + 1) is: " << *(p + 1) << endl;
    // cout << "The value of marks[2] = *(p + 2) is: " << *(p + 2) << endl;
    // cout << "The value of marks[3] = *(p + 3) is: " << *(p + 3) << endl;

    return 0;
}