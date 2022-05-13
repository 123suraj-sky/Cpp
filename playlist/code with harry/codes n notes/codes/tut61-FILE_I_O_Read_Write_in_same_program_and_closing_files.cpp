#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("tut61-sample.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name" << endl;
    // cin >> name;
    getline(cin, name);
    // Writing a string to the file
    hout << "My name is " + name;
    // hout << "My name is " << name;
    hout.close();

    ifstream hin("tut61-sample.txt");
    string content;
    hin >> content;
    cout << "The content of this file is: " << content << endl;
    hin.close();

    return 0;
}