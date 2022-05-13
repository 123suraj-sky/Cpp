#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char m[] = "Hello";
    string str;
    for (int i = 0; i < sizeof(m); i++)
    {
        str[i] = m[i];
        cout << str[i];
    }
    cout << endl;
    return 0;
}