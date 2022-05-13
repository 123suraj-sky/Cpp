#include <iostream>
using namespace std;

int main()
{
    string try1 = "a simple sentence hello hi 12 34 567";
    double size1 = try1.size();     // size function gives the size of the string try1
    double size2 = try1.max_size(); // max_size gives the max character you enter in any string
    int enter;                      // enter used for taking input for "at" function
    int find1 = try1.find("hi", 0); // find function is used to find something (which is written in double inverted commas) at a specific position(written after comma)
    try1[0] = 'B';                  // by writing try[x] = "a", we will replace that position x with the new character "a" or whatever you write
    try1.append(" batman");         // this will append string in try1
    try1.assign("I am Batman");     // this will replace a string by assigning a new string
    try1.begin();

    cout << "Enter a number: ";
    cin >> enter;

    cout << "try1 is " << try1 << endl;
    cout << "size1 is " << size1 << endl;
    cout << "size2 is " << size2 << endl;
    cout << "find1 is " << find1 << endl;
    cout << "at(" << enter << ") is " << try1.at(enter) << endl; // try1.at(5) prints character present at entered position in the string
    cout << "back() is " << try1.back() << endl;                 // returns the last character of the string
    // cout << "begin() is " << try1.begin() << endl;               // returns the first character of the string

    try1.clear(); // clear everything in the try1 string
    cout << "after clear -->" << try1 << "<--" << endl;

    return 0;
}