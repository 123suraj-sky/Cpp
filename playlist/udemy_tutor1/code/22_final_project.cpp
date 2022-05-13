#include <iostream>
using namespace std;

int main()
{
    string user;                                                         // username for creating account
    string pass;                                                         // password for creating account
    string username;                                                     // confirming for your username for login
    string password;                                                     // confirming for password for login
    string q1;                                                           // first question
    string q2;                                                           // second question
    string bagel_type[] = {"nature bagel", "cheese bagel", "egg bagel"}; // list of all bagel we have
    double balance = 5.00;                                               // user initial balance
    double add;                                                          // money user added to his/her balance
    double new_bal;                                                      // new balance if the user add some money
    double bagel_prices[] = {3, 4, 5};                                   // price of all bagel we have
    int q3;                                                              // third question
    cout << "Hello, welcome to the APP" << endl;
    cout << "Please create an new account" << endl;
    cout << "Choose a username: " << endl;
    getline(cin, user);
    cout << "Choose a password:" << endl;
    getline(cin, pass);

    cout << "Please enter your information" << endl;
    cout << "Username: " << endl;
    getline(cin, username);
    cout << "Password: " << endl;
    getline(cin, password);

    while (username != user || password != pass)
    {
        cout << "Wrong username or password. Please try again" << endl;
        cout << "Username: " << endl;
        getline(cin, username);
        cout << "Password: " << endl;
        getline(cin, password);
    }

    cout << "Welcome to the bagel app" << endl;                     // bagel app is used to order bagel
    cout << "Would you like to add money to your balance?" << endl; // first question
    getline(cin, q1);

    if (q1 == "yes" || q1 == "YES" || q1 == "Yes")
    {
        cout << "Enter how much money you want to add:" << endl;
        cin >> add;
        cin.ignore(); // cin.ignore() function is used to take input of string thing after int
        new_bal = balance + add;
        cout << "Your new balance is " << new_bal << " dollars" << endl;
    }
    else
        cout << "Alright" << endl;

    cout << "Would you like a bagel today?" << endl; // second question
    getline(cin, q2);

    if (q2 == "yes" || q2 == "YES" || q2 == "Yes")
    {
        cout << "Please select what bagel you want?" << endl;
        for (int i = 0; i < 3; i++)
            cout << i + 1 << ") " << bagel_type[i] << " -- " << bagel_prices[i] << " dollars" << endl;

        cout << "Your choice: " << endl; // third question
        cin >> q3;

        while (q3 > 3 || q3 < 1)
        {
            cout << "Please try again: " << endl;
            cin >> q3;
        }
        switch (q3)
        {
        case 1:
            cout << "You have ordered a " << bagel_type[0] << endl;
            cout << "The total of your order is " << bagel_prices[0] << endl;
            if (q1 == "yes" || q1 == "YES" || q1 == "Yes")
                cout << "You have " << new_bal - bagel_prices[0] << " dollars" << endl;
            else
                cout << "You have " << balance - bagel_prices[0] << " dollars" << endl;
            break;

        case 2:
            cout << "You have ordered a " << bagel_type[1] << endl;
            cout << "The total of your order is " << bagel_prices[1] << endl;
            if (q1 == "yes" || q1 == "YES" || q1 == "Yes")
                cout << "You have " << new_bal - bagel_prices[1] << " dollars" << endl;
            else
                cout << "You have " << balance - bagel_prices[1] << " dollars" << endl;
            break;

        case 3:
            cout << "You have ordered a " << bagel_type[2] << endl;
            cout << "The total of your order is " << bagel_prices[2] << endl;
            if (q1 == "yes" || q1 == "YES" || q1 == "Yes")
                cout << "You have " << new_bal - bagel_prices[2] << " dollars" << endl;
            else
                cout << "You have " << balance - bagel_prices[2] << " dollars left on your balance" << endl;
            break;

        default:
            cout << "Please enter a valid choice" << endl;
            break;
        }
    }
    else
        cout << "Alright have a good day" << endl;

    return 0;
}