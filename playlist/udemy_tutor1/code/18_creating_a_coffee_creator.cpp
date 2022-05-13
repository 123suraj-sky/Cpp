#include <iostream>
using namespace std;

int main()
{
    double cP = 2.00;

    cout << "Do you want to take a coffee" << endl;
    string q1;
    getline(cin, q1);

    cout << "Enter your balance: " << endl;
    double balance;
    cin >> balance;

    if (q1 == "yes" && balance >= cP)
    {
        cout << "Here is your coffee" << endl;
        cout << "New balance: " << balance - cP <<" dollars"<< endl;
    }
    else if (q1 == "yes" && balance < cP)
    {
        cout << "You don't have enough money sorry." << endl;
    }
    else
    {
        cout << "Have a good day" << endl;
    }

    return 0;
}