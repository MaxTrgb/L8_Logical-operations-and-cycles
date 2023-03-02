/*The input is fed an even number N (not more than 100). 
Display a row without gaps from pairs of numbers 3535353535353535 ... (total digits N).*/

#include <iostream>
using namespace std;

int main()
{
	int N; // Variable for number

	cout << "Enter the number N: "; cin >> N; // Users inputs value

	if (N <= 100) { // Statement for number not to be higher than 100

		for (int a = 1; a <= N; a += 2) { // Loop for calculation

			cout << "35"; // Output for user
		}
	}
	else 
	{
		cout << "Wrong value!" << endl; // Error notification
	}
}