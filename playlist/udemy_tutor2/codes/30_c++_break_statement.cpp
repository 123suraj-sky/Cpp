#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Well done" << endl;
        break;
    case 'D':
        cout << "You Pass" << endl;
        break;
    case 'F':
        cout << "Fail" << endl;
        break;
    
    default:
    cout << "Not graded" << endl;
        break;
    }

    return 0;
}