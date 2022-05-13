#include <iostream>
using namespace std;

class ShopItem
{
// private: // by default private so no need to write it
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() // initialize counter to 0 for each objects
    {
        counter = 0;
    }
    void displayPrice();
    void setPrice();
};

void ShopItem::setPrice()
{
    cout << "Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void ShopItem::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    ShopItem dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}