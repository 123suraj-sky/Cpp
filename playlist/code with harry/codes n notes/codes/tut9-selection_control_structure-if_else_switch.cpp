#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age:" << endl;
    cin >> age;

    // Selection control structure: If-else-if ladder
    // if (age < 18 && age > 0)
    //     cout << "You can not come to my party" << endl;
    // else if (age == 18)
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    // else if (age < 1)
    //     cout << "You are not yet born" << endl;
    // else
    //     cout << "You can come to the party" << endl;

    // Selection control structure: Switch case statements
    // switch (age)
    // {
    // case 1 ... 17:
    //     cout << "You can not come to my party" << endl;
    //     break;
    // case 18:
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    //     break;
    // default:
    //     cout << "No special party" << endl;
    //     break;
    // }

    return 0;
}