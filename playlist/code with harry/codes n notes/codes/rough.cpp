#include <iostream>
using namespace std;

class sky
{
private:
    int password;

public:
    int fb;
    void takePass(int password);
    void takeFb()
    {
        cout << "The value of fb is " << fb << endl;
        cout << "The value of password is " << password << endl;
    }
};

void sky::takePass(int password1)
{
    password = password1;
}

int main()
{
    sky batman;
    batman.fb = 456;
    batman.takePass(5);
    batman.takeFb();

    return 0;
}