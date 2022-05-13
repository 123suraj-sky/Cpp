#include <iostream>
using namespace std;

int main()
{
    cout << "Create a Password" << endl;
    string pass; // for password
    getline(cin, pass);

    cout << "What is the password?" << endl;
    string i; // for answer of user
    getline(cin, i);

    while (i != pass)
    {
        cout << "Wrong Passowrd!! Please try again:" << endl;
        getline(cin, i);
    }

    cout << "You are in." << endl;
    return 0;
}