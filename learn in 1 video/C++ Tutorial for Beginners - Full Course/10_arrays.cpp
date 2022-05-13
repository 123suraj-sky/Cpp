#include <iostream>
using namespace std;

int main()
{
    // int luckyNums[] = {10, 52, 43, 4, 5};
    int luckyNums[20] = {10, 52, 43, 4, 5};
    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;
    luckyNums[10] = 109;
    cout << luckyNums[10] << endl;
    
    return 0;
}