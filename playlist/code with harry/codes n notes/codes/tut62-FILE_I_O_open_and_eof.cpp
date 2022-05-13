#include <iostream>
#include <fstream>
// #include <cstring>
using namespace std;

int main()
{
    // Using member function to open and closing file
    ofstream out;
    out.open("tut61-sample.txt");
    out << "This is me" << endl;
    out << "I am Batman" << endl;
    out.close(); // The file is closed when the program is terminated but it is a good practice to use close() function to avoid memory wastage

    ifstream in;
    string st, st1;
    in.open("tut61-sample.txt");
    // in >> st >> st1;
    // cout << st << endl;
    // cout << st1 << endl;
    while (in.eof() == 0) // eof is end of file
    {
        getline(in, st);
        cout << st << endl;
    }
    
    in.close();

    return 0;
}