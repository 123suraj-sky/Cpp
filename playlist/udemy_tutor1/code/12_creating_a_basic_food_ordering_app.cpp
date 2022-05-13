#include <iostream>
using namespace std;

int main()
{
    cout << "What do you want to eat?" << endl;
    string q1; // question 1
    getline(cin, q1);

    cout << "What do you want to drink?" << endl;
    string q2; // question 2
    getline(cin, q2);

    cout << "What is the price of the food?" << endl;
    double q3; // question 3
    cin >> q3;

    cout << "What is the price of the drink?" << endl;
    double q4; // question 4
    cin >> q4;

    cout << "What is the tip that you want to leave?" << endl;
    double q5; // question 5
    cin >> q5;

    double q6 = q3 + q4 + q5; // total price

    cout << "Your order is " << q1 << " and " << q2 << " as a drink. The total price of your order including the tip is " << q6 << endl;
    return 0;
}