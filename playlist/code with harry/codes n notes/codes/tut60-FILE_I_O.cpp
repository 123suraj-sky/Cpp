#include <iostream>
#include <fstream>
/*
The useful classes for working with files in C++ are:
1) fstreambase
2) ifstream --> Derived from fstreambase
3) ofstream --> Derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1) Using the constructor
2) Using the member function open() of the class
*/
using namespace std;

int main()
{
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor and writing it
    ofstream out("tut60-sample.txt"); // Used to write operation --> writing a file
    // we can also other names than out, here out it used only for simplicity
    out << st;

    // Opening files using constructor and reading it
    // ifstream in("tut60-sample2.txt"); // Used to read operation --> reading a file
    // // in >> st2; // this will only read upto 1st space or \n
    // getline(in, st2); // this will take whole line
    // cout << st2 << endl;
    // getline(in, st2); // run it again to get next line
    // cout << st2 << endl;

    return 0;
}