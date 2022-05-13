#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
    int var[MAX] = {100, 200, 300};
    int *ptr;
    ptr = var;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] " << ptr << endl;
        cout << "value of var[" << i << "] " << *ptr << "\n\n";
        ptr++;
    }

    return 0;
}