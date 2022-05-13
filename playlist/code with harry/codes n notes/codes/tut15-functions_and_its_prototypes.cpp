#include <iostream>
using namespace std;

// Function prototype
// type function_name(arguments);
int sum(int a, int b);
// int sum(int a, b); // --> Not acceptable
// int sum(int, int); // --> Acceptable

// void g(void); // --> Acceptable
void g();

int main() // main is also a function
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    return 0; // means successfully executed program
}

int sum(int a, int b)
{
    // Foraml parameters --> a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c; // return value of function sum
}

void g() // Function need not to return values always
{
    cout << "Hello, Good morning" << endl;
}

/* 
Formal Parameters --> Those parameters/variables which are made in a function
Actual Parameters --> Those paramerters/variables which are passed to the function

Although, sometimes name of Formal and Actual parameters may be same
*/