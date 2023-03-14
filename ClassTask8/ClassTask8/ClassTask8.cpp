/*Task8. Write a program that asks for a number n and then a sequence of n two - digit numbers and finds the sum of those whose product of digits is greater than 35*/

#include <iostream>
using namespace std;

int main()
{
	int n, product, digitOne, sum=0; // Variables for calculations	

	double digitTwo; // Using double because we need remaider from dividng 

	cout << "Enter value for the n number: "; cin >> n; // User enters amout of numbers that will be enter next
	
	cout << "Enter sequence of two - digit numbers: ";

	for (int i = 0; i < n; i++) { // Counter for n numbers

		int nSequence; 

		cin >> nSequence; /// Input

		if ((nSequence > 9) && (nSequence < 100)) { // Program runs only if number is 2-digit 

			digitOne = nSequence / 10; // Frist digit of the number

			digitTwo = nSequence % 10; // Second digit

			product = digitOne * digitTwo; // Get product

			if (product >= 35) { // If it is greater than 35 we add it to sum of the numbers 

				sum += product; 
			}

		}
		else {

			cout << "Number must be two-digit!" << endl; // Error output
			return 0;
		}
	}

	cout << "Sum of numbers whose product of digits is greater than 35: " << sum << endl; // Results
	
}