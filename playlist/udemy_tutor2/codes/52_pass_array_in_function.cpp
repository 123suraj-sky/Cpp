#include <iostream>
using namespace std;

void display(int a)
{
    cout << a;
}

int main()
{
    int n[] = {2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j == i + 1)
                break;
            display(n[i]);
        }
        cout << "\n";
    }

    return 0;
}