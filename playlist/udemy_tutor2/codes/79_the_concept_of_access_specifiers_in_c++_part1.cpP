#include <iostream>
using namespace std;

class example
{
private:
    int val;

public:
    void init_val(int v);
    void print_val();
};

void example::init_val(int v)
{
    val = v;
}
void example::print_val()
{
    cout << "Val " << val << endl;
}

int main()
{
    example ex;
    ex.init_val(100);
    ex.print_val();
    
    return 0;
}