#include <iostream>
using namespace std;

class encap
{
private:
    int num;
    char ch;

public:
    int getNum() const
    {
        return num;
    }
    char getCh() const
    {
        return ch;
    }

    void setNum(int num)
    {
        this->num = num;
    }

    void setCh(char ch)
    {
        this->ch = ch;
    }
};

int main()
{
    encap en;
    en.setCh('A');
    en.setNum(200);
    cout << en.getNum() << endl;
    cout << en.getCh() << endl;
    return 0;
}