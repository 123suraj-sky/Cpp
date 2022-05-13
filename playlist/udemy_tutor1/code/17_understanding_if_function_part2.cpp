#include <iostream>
using namespace std;

int main()
{
    cout << "Do you love pizza?" << endl;
    string val1;
    getline(cin, val1);
    cout << "Do you love burgers?" << endl;
    string val2;
    getline(cin, val2);

    if (val1 == "yes" && val2 == "yes")
    {
        cout << "You love pizza and burger" << endl;
    }
    else if (val1 == "yes" && val2 != "yes")
    {
        cout << "You only love pizza but not burgers" << endl;
    }
    else if (val1 != "yes" && val2 == "yes")
    {
        cout << "You only love burger but not pizza" << endl;
    }
    else
    {
        cout << "You love none of the answers of the choices above" << endl;
    }

    return 0;
}