#include <iostream>
using namespace std;

void display(int);
int display(float);
void display(int, float);

int main()
{
    int a = 5;
    float b = 5.6;

    display(a);
    display(b);
    display(a, b);

    return 0;
}

void display(int var)
{
    cout << "integer number: " << var << endl;
}
int display(float var)
{
    cout << "float number: " << var << endl;
    return 0;
}
void display(int var1, float var2)
{
    cout << "integer number: " << var1 << endl;
    cout << "float number: " << var2 << endl;
}