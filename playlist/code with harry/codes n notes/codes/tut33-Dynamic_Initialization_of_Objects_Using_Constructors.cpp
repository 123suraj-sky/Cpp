#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {} // we have to create a blank constructor b/c initially even if we are not giving values of p, y and r then also the object is ready to go
    BankDeposit(int p, int y, float r); // r can be like 0.04 i.e. value in fraction
    BankDeposit(int p, int y, int r);   // r can be like 14 i.e. value in percentage(assuming percentage always in integer)
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit::show()
{
    cout << "Principal amount was " << principal
         << ". Return value after " << years << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y; // p is principle and y is years
    float r;  // interest rate in decimal/fraction form
    int R;    // interest rate in percentage form

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;

    bd1 = BankDeposit(p, y, R);
    bd1.show();

    return 0;
}