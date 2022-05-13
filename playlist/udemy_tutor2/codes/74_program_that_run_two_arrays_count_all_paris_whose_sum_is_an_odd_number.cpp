#include <iostream>
using namespace std;

int count_pairs(int a[], int b[], int n, int m)
{
    int odd1 = 0, even1 = 0; // for array a
    int odd2 = 0, even2 = 0; // for array b

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2)
            odd1++; // finally it gives 2
        else
            even1++; // finally it gives 3
    }

    for (int i = 0; i < m; i++)
    {
        if (b[i] % 2)
            odd2++; // finally it gives 1
        else
            even2++; // finally it gives 3
    }

    int pairs = min(odd1, even2) + min(odd2, even1);
    return pairs;
}

int main()
{
    int a[] = {9, 14, 6, 2, 11};
    int b[] = {8, 4, 7, 20};
    int n = sizeof(a) / sizeof(a[0]); // number of characters in the array a
    int m = sizeof(b) / sizeof(b[0]); // number of characters in the array b

    //cout << "n is " << n << endl;
    //cout << "m is " << m << endl;

    cout << count_pairs(a, b, n, m) << endl;
    return 0;
}