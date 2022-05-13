#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            float div = (float)a / b;
            if (div < 0)
                throw 'e';
            cout << "a / b = " << div << endl;
        }
        else
            throw 'b';
    }
    catch (int e)
    {
        cout << "Exception: Divided by zero" << endl;
    }
    catch (char st)
    {
        cout << "Exception: Division is less than 1" << endl;
    }
    catch (...)
    {
        cout << "Unknown Exception" << endl;
    }

    return 0;
}