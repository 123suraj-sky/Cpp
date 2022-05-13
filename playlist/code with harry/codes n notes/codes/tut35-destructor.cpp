#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
// It will run implicitly i.e. runs automatically when the block in which constructor is created.

int count = 0;

class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~Num()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main funciton" << endl;
    cout << "Creaing first object n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Existing this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}