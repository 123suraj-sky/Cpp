#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Example 1:-
    // char userCh;
    // cout << "Please enter a character:" << endl;
    // cin >> userCh;
    // if (userCh >= 'a' && userCh <= 'z')
    // {
    //     cout << userCh << " is a lower case letter" << endl;
    // }
    // else if (userCh >= 'A' && userCh <= 'Z')
    // {
    //     cout << userCh << " is an upper case letter" << endl;
    // }
    // else if (userCh >= '0' && userCh <= '9')
    // {
    //     cout << userCh << " is a digit" << endl;
    // }
    // else
    // {
    //     cout << userCh << " is not alpha-numeric character" << endl;
    // }

    // Example 2:-
    // int hour24, minutes24;
    // int hour12, minutes12;
    // string period;
    // char temp;
    // // Taking input from the user
    // cout << "Please enter a time in a time 24-hour format:" << endl;
    // cin >> hour24 >> temp >> minutes24;
    // // Converting minutes24 to minutes12
    // minutes12 = minutes24;
    // // Checking for AM/PM
    // if (hour24 >= 0 && hour24 <= 11)
    // {
    //     period = "am";
    //     // for "am" time is same expect for 0 i.e. 12am
    //     if (hour24 == 0)
    //     {
    //         hour12 = 12;
    //     }
    //     else
    //     {
    //         hour12 = hour24;
    //     }
    // }
    // else
    // {
    //     period = "pm";
    //     // for "pm" time is same expect for 0 i.e. 12pm
    //     if (hour24 == 12)
    //     {
    //         hour12 = 12;
    //     }
    //     else
    //     {
    //         hour12 = hour24 - 12; // time issubtracted from 12 as 12 hour clock repeat after 12
    //     }
    // }
    // // printing the final resultant time
    // cout << hour24 << ":" << minutes24 << " is " << hour12 << ":" << minutes12 << " " << period << endl;

    // Switch Statement
    // Example 3:-
    // double arg1, arg2;
    // double res;
    // char op;
    // // taking input from user
    // cout << "Please enter an ecpression of the form arg1 op arg2" << endl;
    // cin >> arg1 >> op >> arg2;
    // // checking condition from switch expression
    // switch (op)
    // {
    // case '+':
    //     res = arg1 + arg2;
    //     cout << res << endl;
    //     break;
    // case '-':
    //     res = arg1 - arg2;
    //     cout << res << endl;
    //     break;
    // case '*':
    //     res = arg1 * arg2;
    //     cout << res << endl;
    //     break;
    // case '/':
    //     if (arg2 != 0) // only prints the resutls when the number is not divided by zero
    //     {
    //         res = arg1 / arg2;
    //         cout << res << endl;
    //     }
    //     else
    //     {
    //         cout << "Ilegal expression" << endl;
    //     }
    //     break;
    // default:
    //     cout << "Ilegal expression" << endl;
    //     break;
    // }

    
    return 0;
}