#include <iostream>
using namespace std;

int main()
{
    // how to take input int, float, char, double ...
    float age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;
    getchar();

    // how to take input of string
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // getline() is used to take input of whole line
    // getline(cin, variable_name);
    cout << "Hello " << name << endl;

    return 0;
}