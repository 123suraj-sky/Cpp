#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // count in static member
                      // static variable is by default initialized by zero
                      // also known as class variable in OOPs
                      // If we want to declare the variable the from a certain number then we can't declare it here otherwise it will throw error. For that look into line 33 where we it is with scope resolution

public:
    void setData()
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "Employee id is " << id << ", and its count is " << count << endl;
    }

    // static function --> only access static variables and for other variable it will give error
    static void getCount()
    {
        // cout << id << endl; // throw an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
// In the following way we can start the static variable from a certain number say 1000
// int Employee::count = 1000;
int Employee::count;

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1; // can't do this b/c id is private
    // harry.count = 1; // can't do this b/c count is private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}