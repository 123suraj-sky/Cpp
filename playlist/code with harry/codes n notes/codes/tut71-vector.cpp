// Reference website for C++
// cplusplus.com/reference/vector/vector/

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++) // v.size() returns size of vector v
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    //! Ways to create a vector
    vector<int> vec1;        // zero length vector
    vector<char> vec2(4);    // 4 element character vector
    vector<char> vec3(vec2); // 4 element character vector from vec2
    vector<int> vec4(4, 13); // 6 element vector of 3s

    // display(vec1);

    // vec2.push_back('5');
    // display(vec2);

    // display(vec3);

    display(vec4);
    cout << vec4.size() << endl;

    int element, size;
    // size = 5;
    // cout << "Enter the size of your vector: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector: ";
    //     cin >> element;
    //     vec1.push_back(element); // used to add data to the vector
    // }
    // vec1.pop_back(); //notes: this will delete last element
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin(); //* initiliazation of iterator
    // begin() function will point the iterator to the 1st element of vector
    // vec1.insert(iter, 566); //notes: iter is iterator which is act as pointer
    // if we want to insert iterator at second place we simple write following code
    // vec1.insert(iter + 1, 566);
    // display(vec1);

    //notes: to insert n(here it is 5) copies of iter
    // vec1.insert(iter + 1, 5, 566);
    // display(vec1);

    // display(vec1); //* after using at method in display function

    return 0;
}