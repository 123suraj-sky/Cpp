#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:
    string s;       // by default it is private
    void chk_bin(); // check binary

public:
    void read();
    void ones(); // one's complement
    void display();
};

void binary::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        // cout << "s.at(" << i << ") = " << s.at(i) << endl;
        if (s.at(i) != '0' && s.at(i) != '1') // "at" function provides the character at that position of string
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // exit with error code of zero
        }
    }
}

void binary::ones()
{
    chk_bin(); // Nesting of member functions
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        // else if (s.at(i) == '1')
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // OOPs - Classes and objects
    // C++ --> intially called --> C with classes by stroustroup
    // class --> extension of structures (in C)
    // structures had limitations
    //      --> members are public
    //      --> No methods
    // classes --> structures + more
    // classes can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in C++ are typedefed
    // you can delare objects along with the class declaration like this:
    /* 
    class Employee
    {
        class definition
    } harry, rohan, lovish; 
    */
    // harry.salary = 8 makes no sense if salary is private

    // Nesting of member functions
    binary b;
    b.read();
    // b.chk_bin(); // since chk_bin() is private so it can't be done from here
    b.display();
    b.ones();
    b.display();

    return 0;
}