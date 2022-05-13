#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / (float)2;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a = funcAverage(2, 5), b = funcAverage(2, 5.5);

    cout << "The average of these no.s is a " << a << endl
         << "The average of these no.s is b " << b << endl;

    int x = 5, y = 7;
    Swap(x, y);
    cout << "x is " << x << endl
         << "y is " << y << endl;

    return 0;
}