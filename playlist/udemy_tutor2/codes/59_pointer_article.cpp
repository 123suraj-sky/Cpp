// What is a Pointer?
// Pointer is a variable that stores a memory address. OK, that is simple ! But, what is a memory address then? Every variable is located under unique location within a computer's memory and this unique location has its own unique address, the memory address. Normally, variables hold values such as 5 or “hello” and these values are stored under specific location within computer memory. However, pointer is a different beast, because it holds the memory address as its value and has an ability to “point” ( hence pointer ) to certain value within a memory, by use of its associated memory address.


// Retrieving a Variable's Memory Address

// OK, enough talking and let's get down to the pointer business. To retrieve a variable's memory address, we need to use address-of operator &.

// #include <iostream>
// int main()
// {
//   using namespace std;
// // Declare an integer variable and initialize it with 99
//   unsigned short int myInt = 99;
// // Print out value of myInt
//   cout << myInt << endl;
// // Use address-of operator & to print out 
// // a memory address of myInt
//   cout << &myInt << endl;
// return 0;
// }

// OUTPUT: 0x22fece when we first write the code

// The first line of the output contains an integer value 99 and on the second line, there is a memory address of myInt printed out. Please note that your output will be different.

// Assigning a Variable's Memory Address to a Pointer

// Before we can assign a memory address to a pointer, we need to declare one. Declaring a pointer in C++ is as simple as to declare any other variable with one single difference. Asterix symbol " * " needs to be add and located after variable type and before a variable name. One rule has to be followed when assigning memory address to a pointer: pointer type has to match with variable type it will point to. One exception is a pointer to void, which can handle different types of variables it will point to. To declare a pointer pMark of type unsigned short int a following syntax is to be used:

// #include <iostream>
// int main()
// {
//   using namespace std;
// // Declare and initialize a pointer.
//   unsigned short int * pPointer = 0;
// // Declare an integer variable and initialize it with 35698
//   unsigned short int twoInt = 35698;
// // Declare an integer variable and initialize it with 77
//   unsigned short int oneInt = 77;
// // Use address-of operator & to assign a memory address of twoInt to a pointer
//   pPointer = &twoInt;
// // Pointer pPointer now holds a memory address of twoInt
// // Print out associated memory addresses and its values
//   cout << "pPointer's memory address:\t\t" << &pPointer << endl;
//   cout << "Integer's oneInt memory address:\t" << &oneInt << "\tInteger value:\t" << oneInt << endl;
//   cout << "Integer's twoInt memory address:\t" << &twoInt << "\tInteger value:\t" << twoInt << endl;
//   cout << "pPointer is pointing to memory address:\t" << pPointer << "\tInteger value:\t" << *pPointer << endl;
// return 0;
// }

// OUTPUT: when we first run the code
// pPointer's memory address:              0x22fecc
// Integer's oneInt memory address:        0x22fec8        Integer value:  77
// Integer's twoInt memory address:        0x22feca        Integer value:  35698
// pPointer is pointing to memory address: 0x22feca        Integer value:  35698