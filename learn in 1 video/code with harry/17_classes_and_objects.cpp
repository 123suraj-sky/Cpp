#include <iostream>
using namespace std;

class Employee
{
    // public, private and protected are k/a access modifier
public:
    string name;
    int salary;

    Employee(string name, int salary, int sp) // sp for secret password
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salaray is " << this->salary << endl;
        // here 'this' is used in place of 's' as here 'this' talks about the thing we are considering
    }

    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
public:
    int errors;
};

int main()
{
    Employee s("Suraj constructor", 344, 2389);
    // s.name = "Suraj";
    // s.salary = 1000;
    s.printDetails();
    // cout << s.secretPassword; // this throws error
    // as it is private so can't be accessed here
    s.getSecretPassword();

    return 0;
}