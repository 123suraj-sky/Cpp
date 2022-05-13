#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages; // for number of pages
    // Book(string name) // structure function
    // {
    //     cout << name << endl;
    // }

    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }

    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }
};

int main()
{
    Book book3;
    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;

    cout << endl;

    Book book1("Harry Potter", "J K Rowling", 500);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << endl;

    Book book2("Lord of the Rings", "Tolkein", 700);
    book2.title = "I am Batman";

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;
    return 0;
}