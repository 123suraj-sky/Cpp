#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    // int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
        // arr = new int[size];
    }
    T dotProduct(vector &v)
    // int dotProduct(vector &v)
    {
        T d = 0;
        // int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Below code is true when we don't use template
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 1;
    // v1.arr[2] = 0;
    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 4;
    // v2.arr[2] = 444;
    // int a = v1.dotProduct(v2);
    // cout << a << endl;

    vector <float>v1(3);
    v1.arr[0] = 4.1;
    v1.arr[1] = 1.05;
    v1.arr[2] = 0.1;
    vector <float>v2(3);
    v2.arr[0] = 1.4;
    v2.arr[1] = 4.1;
    v2.arr[2] = 4.44;
    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}