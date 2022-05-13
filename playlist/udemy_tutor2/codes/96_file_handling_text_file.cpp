#include <iostream>
#include <fstream> // for both read and write form
using namespace std;

int main()
{
    fstream new_file;
    //new_file.open("new_file", ios::out);
    new_file.open("new file.txt", ios::out);
    if (!new_file)
    {
        cout << "file creation failed" << endl;
    }
    else
    {
        cout << "new file created" << endl;
        new_file.close();
    }

    return 0;
}