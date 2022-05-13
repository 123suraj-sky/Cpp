#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter id of Employee" << endl;
        cin >> id;
    }

    void getId()
    {
        cout << "The id of this employee is: " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();


    // Array of objects
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}