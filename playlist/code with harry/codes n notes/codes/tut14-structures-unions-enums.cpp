#include <iostream>
using namespace std;

// struct employee
// {
//     int eId; // employee Id
//     char favChar;
//     float salary;
// };
typedef struct employee
{
    int eId; // employee Id
    char favChar;
    float salary;
} ep;

// typedef union money       // only 1 can be used at once
// {                 // here it can allocate 4 bytes i.e. max of data types
//     int rice;     // 4 bytes
//     char car;     // 1 bytes
//     float pounds; // 4 bytes
// } mon;
union money       // only 1 can be used at once
{                 // here it can allocate 4 bytes i.e. max of data types
    int rice;     // 4 bytes
    char car;     // 1 bytes
    float pounds; // 4 bytes
};

int main()
{
    // struct employee suraj;
    ep suraj;
    struct employee batman;
    struct employee jarvis;
    suraj.eId = 1;
    suraj.favChar = 'c';
    suraj.salary = 999999999;
    cout << "Employee id is " << suraj.eId << endl;
    cout << "Favourite character is " << suraj.favChar << endl;
    cout << "Salary is " << suraj.salary << endl;

    // union money m1;
    // // mon m1;
    // m1.rice = 34;
    // m1.car = 'c'; // memory is overwritten by car so rice show garbage value
    // cout << "rice is " << m1.car << endl;

    // enum Meal
    // {
    //     breakfast,
    //     lunch,
    //     dinner
    // };
    // // here these itmes become data tyes so we can use it as follows to assign numbers to them
    // Meal m1 = breakfast;
    // cout << m1 << endl;
    // cout << (m1 == 1) << endl; // we can also check conditon through this
    // cout << "breakfast is " << breakfast << endl; // it prints 0 and so on i.e. it gives numbers to all the members which increases readiblity
    // cout << "lunch is " << lunch << endl;
    // cout << "dinner is " << dinner << endl;
    return 0;
}