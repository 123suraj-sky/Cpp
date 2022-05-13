#include <iostream>
using namespace std;

void add(float val1, float val2, float val3)
{
    cout << val1 + val2 + val3 << endl;
    cout << val1 - val2 - val3 << endl;
    cout << val1 * val2 * val3 << endl;
    cout << val1 / val2 / val3 << endl;
}

int main()
{
    float var1, var2, var3;
    cout << "Enter var1" << endl;
    cin >> var1;
    cout << "Enter var2" << endl;
    cin >> var2;
    cout << "Enter var3" << endl;
    cin >> var3;

    add(var1, var2, var3);
    return 0;
}