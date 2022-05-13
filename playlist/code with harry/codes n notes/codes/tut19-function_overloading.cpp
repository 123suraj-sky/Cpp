#include <iostream>
using namespace std;

// Function overloading --> name of function is same, yet with different arguments perform different tasks

// int sum(float a, int b) // --> This will also run and don't throw error
// i.e. promotion of data-types takes place
// char to int or float to double or whichever is possbile and if that is not possible it will throw error
int sum(int a, int b)
{
    cout << "with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "with 3 arguments" << endl;
    return a + b + c;
}

// Calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}

// Calculate the volume of a cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3, 6 and 7 is " << sum(3, 6, 7) << endl;

    cout << "The volume of cuboid 3, 7, 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder radius 3, and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube 3 is " << volume(3) << endl;
    return 0;
}