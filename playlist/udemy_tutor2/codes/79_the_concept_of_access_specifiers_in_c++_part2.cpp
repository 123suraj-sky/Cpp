#include <iostream>
using namespace std;

class example1
{
protected: // can be accessed only by this class or a class derived from it
    int a;
};

class example2 : public example1 // here example2 is a derived class of class example1
                                 // example2 is inheriting from example1
                                 // example1 is parent class for example2
{
public:
    void init_a(int a)
    {
        this->a = a;
    }
    void print_a()
    {
        cout << "a is " << a << endl;
    }
};

int main()
{
    example2 ex;
    ex.init_a(100);
    ex.print_a();
    return 0;
}