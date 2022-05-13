#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee() {} // default constructor of Employee
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
};

// Derived Class
// Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/
// generally in programming it {{x}} means x to be replaced by something
// visibility mode can be private or public
//      --> if visibility is private - public members of base class will become private members of derived class
//      --> if visibility is public - public members of base class will become public members of derived class
//      --> default visibility mode is private
//      --> private members of base class cannot be inherited

// Creating a programmer class derived from Employee Base class
class Programmer : Employee
// class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId) // if id is private it cannot be inherited
    // Call default constructor of Employee
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << "id is " << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << "salary of harry is " << harry.salary << endl;
    cout << "salary of rohan is " << rohan.salary << endl;

    Programmer skillF(10);
    cout << "programmer language code is " << skillF.languageCode << endl;
    // cout << "programmer id is " << skillF.id << endl; // this code will run if we inherit programmer as public
    skillF.getData();
    return 0;
}