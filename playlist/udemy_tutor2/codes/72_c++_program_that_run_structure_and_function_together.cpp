#include <iostream>
using namespace std;

struct person
{
    char name[50];
    int age;
    float salary;
};

void displayData(person);

int main()
{
    person p;
    cout << "Enter full name: ";
    cin.getline(p.name, sizeof(p.name));
    cout << "Enter salary: ";
    cin >> p.salary;
    cout << "Enter age: ";
    cin >> p.age;

    displayData(p);

    return 0;
}

void displayData(person p)
{
    cout << "\nDisplay information" << endl;
    cout << "Name: " << p.name << endl;
    cout << "age: " << p.age << endl;
    cout << "salary: " << p.salary << endl;
}