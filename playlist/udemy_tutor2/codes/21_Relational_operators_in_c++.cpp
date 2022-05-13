#include <iostream>
using namespace std;

int main()
{
    int a = 25, b = 5;
    cout << "This is simple relational operator program" << endl;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a == b)
    {
        cout << "a and b are equal" << endl;
    }
    else
    {
        cout << "b is greater" << endl;
    }

    return 0;
}