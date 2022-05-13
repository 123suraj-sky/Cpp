#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Suraj";
    string *pName = &name;

    cout << "Age: " << &age << endl;
    cout << "Age: " << pAge << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Gpa: " << pGpa << endl;
    cout << "Name: " << &name << endl;
    cout << "Name: " << pName << endl;

    cout << *pAge << endl;
    cout << *&age << endl;

    return 0;
}