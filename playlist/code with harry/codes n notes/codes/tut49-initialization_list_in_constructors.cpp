#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
Constructor (argument-list) : initialization-section
{
    assignment + other code;
}

Example:-
    class Test
    {
        int a;
        int b;
        public:
            Test(int i, int j) : a(i), b(j)
            {
                ---- Constructor Body ----
            }
    };
*/
class Test
{
    int a;
    int b;
    // int a, b; // both method is true

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(a + j), a(i)
    // Test(int i, int j) : b(j), a(i + b) // this will throw an error b/c int a is declared first and then int b is declared. So, int a always be initialized first
    // if we delcare b first then this will give no error
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}