#include <iostream>
using namespace std;

int main()
{
    char name[] = "Batman";
    char *p = name;

    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}