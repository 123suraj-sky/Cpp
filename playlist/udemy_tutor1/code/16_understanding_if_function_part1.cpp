#include <iostream>
using namespace std;

int main()
{
    string val1 = "Yes";
    int val2 = 5;
    int val3 = 6;
    if (val1 == "yes" || val2 > 44 && val3 == 6)
    {
        cout << "Great" << endl;
    }
    else
    {
        cout << "Bad" << endl;
    }

    return 0;
}