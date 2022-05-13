#include <iostream>
using namespace std;

inline int Max(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << "Max (20, 10): " << Max(20, 10) << endl;
    cout << "Max (200, 100): " << Max(200, 100) << endl;
    cout << "Max (20154, 1054): " << Max(20154, 1054) << endl;
    return 0;
}