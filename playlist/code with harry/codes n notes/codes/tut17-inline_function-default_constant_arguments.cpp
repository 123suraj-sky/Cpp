#include <iostream>
using namespace std;

inline int product(int a, int b) // inline function replace the following code by the product during compile time.
// So, when we call functions several times, instead of calling product function and executing code (for the number of times we call the function) "inline" functions replaces the return value first time and again when we call the function it simply writes the result and don't got for calling functions, executing it and at all.
// Therefore, it saves lot of time
// Always use inline functions for small codes. As for large codes it consumes lot of memory as it has to replace all values so the compiler keep it in memory and the memory increases for large codes
// Don't use inline functions in recursion
// Don't use inline functions for static variables
{
    return a * b;
}
// Sometimes, inline functions throws error while compiling b/c compiler also decides if it is necessary to make inline functions if not it throws error and you have to use the normal functions

// Not recommended to use below function with inline functions
// int product(int a, int b)
// {
//     static int c = 0;
//     // This executes only once
//     // Next time this function is run, the value of c will be reatined
//     // static means it will be initialized only once and if it's value changes. Then, it will retain it i.e. value of c never again initialized to 0
//     c++;
//     return a * b + c;
// }

float moneyReceived(int curretMoney, float factor = 1.04) // default arguments should be written always after the arguments which are compulsory otherwise it throws error
// gives interest of 4%
// but for some VIP people factor is more. So, for that
{
    return curretMoney * factor; // here factor is default argument
    // in the first cout command we only pass 1 argument. So, the argument we do not pass i.e. factor will act as default argument
    // in the second cout command we pass 2 argument so factor will act as noramal argument as currentMoney
}

int strlen(const char *ptr) // const keyword is used for making constant arguments
// its value can't be changed even by mistake --> compiler won't allow it
// These are mostly used for reference variables and pointers --> arguments passed through pointers
{
}

int main()
{
    // for inline functions
    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;

    // for defalut arguments
    int money = 100000;
    cout << "If you have " << money << "Rs in your bank account, you will receive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << "Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << "Rs after 1 year" << endl;

    return 0;
}