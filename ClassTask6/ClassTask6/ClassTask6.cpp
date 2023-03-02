/*Write a program during which two natural numbers a and b are read from the keyboard (each not more than 100, a <b). 
Withdraw the sum of all numbers from A to B.*/

#include <iostream>
using namespace std;


int main()
{
    int a, b, sum = 0; // Variable a is starting number, b - end, sum is variable for calculation

    cout << "Enter a value for a: "; cin >> a; // User enters a number
    cout << "Enter a value for b: "; cin >> b; // User enters a number


    if (a <= 100 && b <= 100) { // Condition for the numbers: not bigger than 100


        for (int i = a; i <= b; i++) { // Loop with counter from a to b, variable "i" will help us use veriable "a" later

            sum += i; // Adding all the numbers
        }

        cout << "The sum of integers from " << a << " to " << b << " is " << sum << endl; // Output to the user. Since we used variable "i" for calculations, "a" has it`s original value
    }
    else { // If numbers are bigger user gets notification

        cout << "Wrong value!" << endl;

    }

}