/*Write a program that asks two positive integers and displays all numbers between*/

#include <iostream>
using namespace std;


int main()
{
	int num1, num2; // Variables for numbers

	cout << "Enter first number: "; cin >> num1; // User enters data
	cout << "Enter second number: "; cin >> num2;

	if (num2 > num1) { // Statement for second number to be higher than first one

		for (; num1 <= num2; num1++) { // Loop to count from first to second number

			cout << num1 << " "; // Output for user
		}
	}
	else {

		cout << "Second number must be higher than first one!" << endl; // Error notification

	}
}