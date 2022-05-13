#include <iostream>
using namespace std;

// function prototype
// return_type function_name(parater list)
// {
//     body of the function
// }

int max(int num1, int num2);

int main()
{
    int a = 50, b = 100, rest;

    rest = max(a, b);
    cout << "Max value is " << rest << endl;

    return 0;
}

int max(int num1, int num2)
{
    int result;
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}