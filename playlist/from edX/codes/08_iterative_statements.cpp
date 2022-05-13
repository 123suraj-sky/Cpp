#include <iostream>
using namespace std;

int main()
{
    // Example 1:-

    // Method 1
    // int n;       // for stroing the number enterd by the user
    // int counter; // this will print the result from n, n-1, n-2, ... , 3, 2, 1
    // // Taking input from the user
    // cout << "Please enter a positive integer" << endl;
    // cin >> n;
    // counter = 1;
    // while (counter <= 4)
    // {
    //     cout << counter << endl;
    //     counter++;
    // }

    // Method 2
    // int n;       // for stroing the number enterd by the user
    // int counter; // this will print the result from n, n-1, n-2, ... , 3, 2, 1
    // // Taking input from the user
    // cout << "Please enter a positive integer" << endl;
    // cin >> n;
    // for(counter = 1; counter <= 4; counter++)
    // {
    //     cout << counter << endl;
    // }


    // Example 2:-
    // int num; // variable for number user will enter
    // int temp; // temp stores num and carries it untouched and give it value back to num at the end of the loop
    // int sumDigits, countDigits; // sumDigits for sum of the digits and countDigits for number of digits in the number
    // int currDigit; // takes the last digit
    // // Taking the input from the user
    // cout << "Enter a positive integer" << endl;
    // cin >> num;
    // temp = num;
    // sumDigits = 0;
    // countDigits = 0;
    // while (num > 0)
    // {
    //     currDigit = num % 10;
    //     countDigits++; //
    //     sumDigits += currDigit;
    //     num /= 10;
    // }
    // num = temp;
    // cout << num << " has " << countDigits << " Digits " << endl;
    // cout << "and their sum is " << sumDigits << endl;

    // Example 3:-
    // int numOfStudents; // total number of students
    // int count; // count is to take marks of all students
    // int curr, sum; // curr is current number and sum is the sum of the numbers of students
    // double average; // it gives the average of the marks of students
    // // Taking input for number of students
    // cout << "Please enter the number of students in class" << endl;
    // cin >> numOfStudents;
    // // Taking input for student's grade
    // cout << "Enter the student's grade (separate by a space)" << endl;
    // sum = 0; // sum is initialized to 0
    // for (count = 0; count < numOfStudents; count++)
    // {
    //     cin >> curr;
    //     sum += curr;
    // }
    // // finding average
    // average = (double)sum / numOfStudents;
    // // Printing result
    // cout << "The average is " << average << endl;

    // Example 4:-
    // bool seenEndOfInput; // check for user entering -1
    // int sum, numOfStudents; // as usual meaning
    // int curr; // current grade of current student
    // double average; // gives average
    // // Taking input using while loop
    // cout << "Enter the grades separated by a space" << endl;
    // cout << "End the sequence by typing -1:" << endl;
    // sum = 0;
    // numOfStudents = 0;
    // seenEndOfInput = false;
    // while (seenEndOfInput == false)
    // {
    //     cin >> curr;
    //     if (curr == -1) // end the loop if user enter -1
    //     {
    //         seenEndOfInput = true;
    //     }
    //     else
    //     {
    //         sum += curr;
    //         numOfStudents++;
    //     }
    // }
    // average = (double)sum / numOfStudents;
    // cout << "The class average is " << average << endl;
    
    return 0;
}