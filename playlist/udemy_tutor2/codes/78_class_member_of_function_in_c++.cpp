#include <iostream>
using namespace std;

class car
{
public:
    string BMW;
    int id;

    void printName(); // printName is not defined in the class function
    void printId()    // printId is defined in the class funciton
    {
        cout << "BMW id is " << id << endl;
    }
};

void car ::printName() // calling class using '::' (scope resolution)
{
    cout << "Car name is " << BMW << endl;
}

int main()
{
    car obj1;
    obj1.BMW = "BMW";
    obj1.id = 18;
    obj1.printName(); // calling the printName() function
    obj1.printId();
    return 0;
}
