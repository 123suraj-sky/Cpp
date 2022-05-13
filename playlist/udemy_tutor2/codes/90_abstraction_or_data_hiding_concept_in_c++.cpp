#include <iostream>
using namespace std;

class abt
{
private:
    int num;
    char ch;

public:
    void setValue(int n, char c)
    {
        num = n;
        ch = c;
    }

    void getValues()
    {
        cout << "Number is " << num << endl;
        cout << "character is " << ch << endl;
    }
};

int main()
{
    abt ab;
    ab.setValue(100, 'F');
    ab.getValues();

    return 0;
}