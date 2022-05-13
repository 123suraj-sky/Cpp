#include <iostream>
using namespace std;

int main()
{
    /* 
    Loops in C++:
    There are three types of lops in C++:
        1. For Loop
        2. While Loop
        3. do-ehile Loop
    */

    // For loop in C++
    // Syntax for "For loop"
    // for (initialization; condition; updation)
    // {
    //     loop body (C++ code);
    // }
    // for (int i = 0; i < 100; i++)
    //     cout << i + 1 << endl;
    // Example of infinite for loop
    // for (int i = 0; i > -1; i++)
    //     cout << i << endl;

    // While loop in C++
    // Syntax:
    // while (/* condition */)
    // {
    //     /* code */
    // }
    // Printing 1 to 100 using while loop
    // int i = 1;
    // while (i <= 100)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // Example of infinte while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Do while loop in C++
    // Syntax:
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    // Printing 1 to 100 using do while loop
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 100);

    // Print table of 6 using do while loop
    // int i = 1;
    // do
    // {
    //     cout << "6 x " << i << " = " << 6 * i << endl;
    //     i++;
    // } while (i <= 10);

    return 0;
}