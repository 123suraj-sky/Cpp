#include <iostream>
using namespace std;

int main()
{
    string food[10] = {"pasta", "pizza", "burger", "sushis", "lasagna"};
    food[1] = "maggie";
    cout << food[1] << endl;
    cout << "Please fill up the number 1 of the array" << endl;
    getline(cin, food[2]);
    cout << food[2] << endl;

    return 0;
}