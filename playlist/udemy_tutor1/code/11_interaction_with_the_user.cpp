#include <iostream>
using namespace std;

int main()
{
    cout << "Hey What do you want to eat?" << endl;
    string ans1;
    getline(cin, ans1);
    cout << "How many slices do you want?" << endl;
    int ans2;
    cin >> ans2;

    cout << "You want to eat " << ans2 << " slices of " << ans1 << endl;

    return 0;
}