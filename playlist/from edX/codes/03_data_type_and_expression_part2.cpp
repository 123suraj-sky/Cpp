#include <iostream>
#include <cmath>
using namespace std;

// const double PI = 3.14159;

int main()
{
    double radius, area;

    cout << "Please enter the radius:" << endl;
    cin >> radius;

    area = M_PI * (radius * radius); // M_PI for math pi(see the word file)
    // why it is showing M_PI is undefined
    // it is defined in C language
    // as #include <cmath>(in c++) is similar to #include<math.h> so we use <cmath>

    cout << "The area of a circle with radius of " << radius << " is " << area << endl;

    return 0;
}