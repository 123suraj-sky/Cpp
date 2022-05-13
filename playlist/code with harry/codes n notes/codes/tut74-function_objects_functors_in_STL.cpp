#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //notes: Function Objects (Functor): Function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr, arr + 5); // this will sort arr upto 5th element in acending order as no other argument is passed
    sort(arr, arr + 6, greater<int>()); // this will sort arr in decending order
    // cout << "sizeof(arr) " << sizeof(arr) / sizeof(int) << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}