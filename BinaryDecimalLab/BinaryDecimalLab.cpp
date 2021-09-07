// BinaryDecimalLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
//Input a number,
// while the number is not 0, Divide the number and store the remainder values into an array.
// reverse the array and then return it.
// EX. 53 % 2 , 53 / 2 for decimal to binary value

// use a summation (a loop) the value at place i times the base to the power of i. base is 2.
int main()
{
    int num;
    int i = 0; // place in the array
    int arr[50]{}; // set up array to store remainder
    cout << "Enter an integer: ";
    cin >> num;


    if (num == 0)
    {
        cout << 0;
        return 0;
    }
    else if (num < 0) 
    {
        cout << "Negative number input, Exiting system";
        return 0;
    }
    while(num != 0) // While the number is not equal to 0, the remainder is stored in an array and num is divided by 2.
    {
        arr[i] = num % 2; //remainder is stored in the ith place of the array.
        num /= 2;
        i++;
    }
    cout << "Binary number : ";
    for (i = i - 1 ; i >= 0; i--) { // a loop that will reverse the array and print out the binary number
        cout << arr[i];
    }
    return 0;
}



