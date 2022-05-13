#include <iostream>
using namespace std;

void sayHi(string name, int age);

int main()
{
    cout << "top" << endl;
    sayHi("Suraj", 20);
    cout << "bottom" << endl;
    sayHi("Batman", 205);
    sayHi("Robin", 200);

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << endl;
}