/*Write a program that asks a natural number and brings out all positive numbers to that number*/

#include <iostream>
using namespace std;

int main()
{
	int num, a = 1; // variables for number and loop

	cout << "Please enter the number: "; cin >> num; // Enter the number here

	cout << "All numbers  before " << num << " are: "; // A piece of interface

	for (; a <= num; a++) { // Loop to calculate all numbers before "num"
				
		cout << a << " "; // Result

	}

}