#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl
             << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    int item;
    float price;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    /*
    1: general store item
    2: veggies item
    3: hardware item
    */
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << ": ";
        cin >> item >> price;
        ptr->setData(item, price);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\nItem number " << i + 1 << ": " << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}