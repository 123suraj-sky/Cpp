#include <iostream> // input output stream
// #include <iomanip> // input output manipulator
// #include <fstream> // file stream

using namespace std;

int main()
{
    char str[] = "hello cout";
    cout << "Value of str is = " << str << endl;

    char name[50];
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;

    return 0;
}