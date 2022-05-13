#include <iostream>
using namespace std;

double cube(double num){
    // double result = num * num * num;
    // return result;
    return num * num * num; // function end at return
    cout << "Hello" << endl; // this will never print as the fucntion is end by return
}

int main()
{
    // double answer = cube(5);
    // cout << answer << endl;

    cout << cube(5) << endl;
    return 0;
}