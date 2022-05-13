#include <iostream>
using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;
    // if (isMale || isTall)
    if (isMale && isTall)
    {
        cout << "You are a tall male" << endl;
    }
    else if (isMale && !isTall)
    {
        cout << "You are a short man" << endl;
    }
    else if (!isMale && !isTall)
    {
        cout << "You are tall but bot male" << endl;
    }
    else
    {
        cout << "You are not male nor tall" << endl;
    }
    
    return 0;
}