#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // base class pointer is pointing towards derived class
    // when we call any funciton from pointer say display(), it will be called from Base class as pointer is from base class
    // Above point is known as "Late Binding"

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 314; //will throw an error b/c pointer is pointing towards Base class and base class has no variable named var_derived
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->var_base = 982;
    derived_class_pointer->display();

    // It is decided at run time which function to be called using pointer as display() function has more than 1 definitions
    // This is called as Run time polyforphism

    return 0;
}