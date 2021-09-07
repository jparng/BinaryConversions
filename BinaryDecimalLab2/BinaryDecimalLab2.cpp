// BinaryDecimalLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void main()
{
	string binary,b, rev;
	int digit;
	int sum = 0;
	int n = 0;

	cout << "Enter a binary string: ";
	cin >> binary;
	
	//reverse the string 
	reverse(binary.begin(), binary.end());

	// for loop summation of value[ith place] * base 2 with power of i. 
	for (int i = 0; i < binary.length(); i++) 
	{
		b = binary[i];
		digit = atoi(b.c_str());
		sum += digit * pow(2,i);
	}
	cout << sum;
}

