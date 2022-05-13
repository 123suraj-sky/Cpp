#include <iostream>
using namespace std;

int main()
{
    char c = 0;
    for (int i = 0; i <= 255; i++)
    {
        cout << "character at position " << i << " is " << c << endl;
        c++;
    }
    cout << "\nIf we continue to print ascii table using code it start repeating itself from charcter at position 0" << endl;
    // system("pause"); --> We can use cmd command in this way
    // system("cls");
    // system("dir");
    // system("color \?"); // --> In this way we can change terminal color
    // system("color 07"); // --> In this way we can change terminal color
    // system("calc");
    // system("notepad");
    // system("certmgr");
    // system("taskmgr");
    
    return 0;
}