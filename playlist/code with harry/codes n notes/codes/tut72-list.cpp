#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++) // lst.end reference to the end of the list
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // iterator
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // if we continue to do this process, we again going to print the list
    // display(list1);

    // // sorting the list
    // list1.sort();
    // display(list1);

    // // Removing elements from the list
    // list1.pop_back();
    // display(list1); // delete an element from last
    // list1.pop_front();
    // display(list1); // delete an element from starting
    // list1.remove(9);
    // display(list1); // delete a particular element (9 in this case), even if the number has more than 1 occurences, all the occurences will be removed

    list<int> list2(3); // empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 2;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // sorting and merging
    // list1.sort();
    // list2.sort();
    list1.merge(list2);
    list1.sort();
    cout << "List 1 after merging: ";
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);

    return 0;
}