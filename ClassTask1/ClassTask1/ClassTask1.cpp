/*Write a program that asks the natural number N (no more than 50) and outputs two rows of n stars.*/

#include <iostream>
using namespace std;

int main()
{
	int N; // Variable for input number

	cout << "Enter value for N: "; cin >> N; // User eners the number

	if (N <= 50) { // Statement for number limit of 50

		for (int a = 1; a <= N; a++) { // Loop for first line with * 

			cout << "*"; // Output for user
		}

		cout << endl; 

		for (int a = 1; a <= N; a++) { // Loop for second line with*

			cout << "*";
		}
	}
	else { 
		cout << "Wrong value!" << endl; // Error notification
	}
}