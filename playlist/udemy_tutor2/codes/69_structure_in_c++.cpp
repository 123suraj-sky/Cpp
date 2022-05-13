#include <iostream>
using namespace std;

struct person
{
    char name[50];
    int age;
    float salary;
    char city[50];
};

int main()
{
    person p1;
    cout << "Enter your name: ";
    cin.get(p1.name, 50);
    cout << "Enter your age: ";
    cin >> p1.age;
    cout << "Enter your salary: ";
    cin >> p1.salary;
    // getchar();
    cin.ignore();
    cout << "Enter your city name: ";
    cin.get(p1.city, 50);

    cout << "\nDisplay information\n\n";
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    cout << "City: " << p1.city << endl;

    return 0;
}