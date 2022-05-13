#include <iostream>
using namespace std;

int main()
{
    // int numberGrid[][2] = { // we don't need to mention the first array in the array of higher order
    int numberGrid[3][2] = {
        {1, 5},
        {051, 55}, // why it is printing 41 in place 051
        {3, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}