/* Create 2 classes
    1) SimpleCalculator --> Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another funcitons
    2) ScientificCalculator --> Takes input of 2 numbers using a utility function and performs any scientific operations of your choice and displays the results using another funcitons

    Create another class HybridCalculator and inherit it using these 2 classes and answer the following questions:
    Q1. What type of inheritance are you using
    Q2. Which mode of inheritance are you using
    Q3. Create an object os HybridCalculator and display results of simple and scientific calculator
    Q4. How is code reusability implemented
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void operations1(int a, int b)
    {
        cout << "\nCalling Operations1" << endl;
        cout << "sum of " << a << " and " << b << " is " << a + b << endl;
        cout << "difference of " << a << " and " << b << " is " << a - b << endl;
        cout << "product of " << a << " and " << b << " is " << a * b << endl;
        cout << "division of " << a << " and " << b << " is " << (float)a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    void operations2(int a, int b)
    {
        cout << "\nCalling Operations2" << endl;
        cout << a << " to the power " << b << " is " << pow(a, b) << endl;
        cout << b << " to the power " << a << " is " << pow(b, a) << endl;
        cout << a << "th root of " << b << " is " << pow(b, 1 / (float)a) << endl;
        cout << b << "th root of " << a << " is " << pow(a, 1 / (float)b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void show()
    {
        cout << "Displaying the results: " << endl;
        operations1(2, 4);
        operations2(4, 5);
    }
};

int main()
{
    HybridCalculator result;
    result.show();
    return 0;
}