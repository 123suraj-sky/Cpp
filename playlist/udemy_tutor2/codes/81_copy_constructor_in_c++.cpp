#include <iostream>
using namespace std;

// if the copy constructor is not defined in the class then the compiler itselft one
// if code has pointer or some dynamic memory allocation then the code must have the copy constructor
class line
{
public:
    int getLength(void);

    line(int len);         // constructor
    line(const line &obj); // copy constructor
    ~line();               // destructor

private:
    int *ptr;
};

line::line(int len) // here first line is scope resolution of second line
{
    cout << "Normal constructor allocating pointer" << endl;
    ptr = new int;
    *ptr = len;
}

line::line(const line &obj)
{
    cout << "Copy constructor allocating pointer" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}
line::~line(void)
{
    cout << "Freeing Memory" << endl;
    delete ptr; // it will delete the pointer ptr
}

int line::getLength(void)
{
    return *ptr; 
}

void display(line obj)
{
    cout << "length of line " << obj.getLength() << endl;
}

int main()
{
    line line(20);
    display(line);
    return 0;
}