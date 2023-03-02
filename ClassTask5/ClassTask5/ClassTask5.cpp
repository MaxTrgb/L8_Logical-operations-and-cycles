/*The input is given a natural number N (not more than 100). 
Display all odd numbers from 1 to N.*/

#include <iostream>
using namespace std;

int main()
{
	int N; // Veriable for the number

	cout << "Enter the N number: "; cin >> N; // User enters the value

	for (int odd = 1; odd <= N; ++odd) // Loop from 1 to variable N               
	{
		if (odd % 2 == 1) // If the remainder from the number during division by 2 gives 0   
		{
			cout << odd << " "; // Output for user      
		}
	}
}