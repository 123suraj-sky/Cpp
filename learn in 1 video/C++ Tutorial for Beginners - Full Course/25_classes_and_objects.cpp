#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages; // for number of pages
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J K Rowling";
    book1.pages = 500;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << endl;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    // we can change these values i.e. title, author , pages
    book2.title = "Hunger Games";

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;
    return 0;
}