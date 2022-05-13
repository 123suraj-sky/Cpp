#include <iostream>
using namespace std;

int main()
{
    // Example 1
    // int i;
    // cout << "Please enter an integer value: ";
    // cin >> i;
    // cout << "The value you entered is " << i << endl;

    // Example 2
    string str;
    cout << "Please enter a name" << endl;
    getline(cin, str);
    cout << "Hello " << str << " welcome to this code" << endl;

    return 0;
}