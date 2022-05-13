#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name = "Bob";
    string ex1 = "run"; // exercise
    int val1 = 2;   // number of pizza
    int val2 = 12;  // cost of pizza
    int val3 = 30;  // time taken
    int val4 = 400; // calorie burn
    int val5 = 500; // this is final calorie

    cout << "hello " << name << endl;

    cout << "you ate " << min(val1, val2) << " slices of pizza and it cost you " << max(val1, val2) << " dollars." << endl;

    cout << "You have also " << ex1 << " for about " << min(val3, val4) << " minutes and you have burned " << max(val3, val4) << " calories." << endl;

    cout << "Your calorie intake was " << (val5 - val4) << " calorie" << endl;
    return 0;
}