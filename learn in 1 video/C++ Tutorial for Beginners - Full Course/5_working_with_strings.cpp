#include <iostream>
using namespace std;

int main()
{
    // cout << "I am ";
    // cout << "Batman" << endl;

    string phrase = "I am Batman";

    cout << phrase << endl;
    cout << phrase.length() << endl; // .length() gives the length of the string

    // printing the string character one by one
    for (int i = 0; i < 11; i++)
    {
        cout << phrase[i];
    }
    cout << endl;

    // modify the string character
    phrase[0] = 'A';
    cout << phrase << endl;

    // find something in a string --> use of find()
    cout << phrase.find("t", 0) << endl; // check after index 0
    // result shows the starting position of the entered string or character
    cout << phrase.find("Batman", 3) << endl; // check after index 3

    // use of substr()
    // cout << phrase.substr(5, 3) << endl; // where 5 is the starting index of string and 3 is the length of string we want
    string phraseSub;
    phraseSub = phrase.substr(5, 3);

    cout << phraseSub << endl;

    return 0;
}