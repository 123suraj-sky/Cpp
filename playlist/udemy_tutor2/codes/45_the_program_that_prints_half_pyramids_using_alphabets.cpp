#include <iostream>
using namespace std;

int main()
{
    char input, alp = 'A'; // alp for alphabet
    cout << "Enter the uppercase character you want to print: ";
    cin >> input;
    for (int i = 1; i <= (input - 'A' + 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << alp << " ";
        }
        alp++;
        cout << endl;
    }
    system("pause");
    // system("color \?"); // --> In this way we can change terminal color
    // system("color 0a"); // --> In this way we can change terminal color
    return 0;
}