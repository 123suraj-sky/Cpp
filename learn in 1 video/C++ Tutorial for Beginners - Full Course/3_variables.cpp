#include <iostream>
using namespace std;

int main()
{
    string characterName = "JOHN";
    int characterAge = 35;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    characterName = "Batman";
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    return 0;
}