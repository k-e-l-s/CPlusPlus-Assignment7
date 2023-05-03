// C++Assignment7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* 
    Kelsey Zirk
    000399209
    CSTP 1205
    C++
*/
#include <iostream>
using namespace std;

// Declaring functions that I will create below the main function
int sumToN(int);
int printOddNumbers(int);
void arrayReverse(int [], int);


int main()
{
    //testing of sumToN(int) function
    //test setup
    cout << "Sum to 10: " << endl;
    //test execution
    cout << sumToN(10) << endl;
    //test cleanup + next test setup
    cout << "===========" << endl << "Sum to 15: " << endl;
    //test execution
    cout << sumToN(15) << endl;
    //test cleanup to separate tasks
    cout << "===========" << endl;
    
    //testing of printOddNumbers(int)
    //test setup
    cout << "Odd Numbers from 10: " << endl;
    //test execution
    cout << printOddNumbers(10) << endl;
    //test cleanup + next test setup
    cout << "===========" << endl << "Odd Numbers from 15: " << endl;
    //test execution
    cout << printOddNumbers(15) << endl;
    //test cleanup to separate tasks
    cout << "===========" << endl;
    
    //testing of arrayReversed(int [], int)
    //test setup
    cout << "Initial array: " << endl;
    const int SIZE = 5;
    const int SIZE2 = 9;
    int array1[SIZE] = { 1, 2, 3, 4, 5 };
    int array2[SIZE2] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
    //iterating through the array and printing each element along with spacing
    for (int i = 0; i < SIZE; i++)
    {
        cout << array1[i] << "\t";
    }
    cout << endl;

    cout << "Reversed array: " << endl;
    //test execution
    arrayReverse(array1, SIZE);
    //iterating through the array and printing each element along with spacing
    for (int i = 0; i < SIZE; i++)
    {
        cout << array1[i] << "\t";
    }

    //next test setup
    cout << endl << "Initial array2: " << endl;
    //iterating through the array and printing each element along with spacing
    for (int i = 0; i < SIZE2; i++)
    {
        cout << array2[i] << "\t";
    }
    cout << endl;

    cout << "Reversed array2: " << endl;
    //test execution
    arrayReverse(array2, SIZE2);
    for (int i = 0; i < SIZE2; i++)
    {
        cout << array2[i] << "\t";
    }

    //printing a statement to show the user that the program has completed
    cout << endl << "All tests executed!\n";
    return 0;
}

//a recursive function that takes in an integer, calculates the sum of the numbers up to the given integer, and returns the full number
int sumToN(int n)
{
    cout << n << endl;
    //base case to break the recursion loop when n is equal to or less than 1
    if (n <= 1)
        return n;
    //recursively calling the function again
    return n + sumToN(n - 1);
}

//a recursive function that takes in an integer, and prints all the odd integers from the given integer, down to to 1
int printOddNumbers(int n)
{
    //base case to break out of the recursion loop when n is equal to 1
    if (n == 1)
        return n;
    //if the modulus of n is not zero, this means the integer is odd and we want to print it
    if ((n % 2) != 0)
        cout << n << endl;
    //recursively calling the function again
    return printOddNumbers(n - 1);
}

//a recursive function that takes in an array, and then recursively reverses the array
void arrayReverse(int myarray[], int n)
{
    //base case
    if (n > 1)
    {
        int temp = myarray[0];
        myarray[0] = myarray[n - 1];
        myarray[n - 1] = temp;
        arrayReverse(myarray + 1, n - 2);
    }
}