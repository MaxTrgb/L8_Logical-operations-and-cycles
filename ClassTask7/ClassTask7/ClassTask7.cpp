/*ClassTask7. Write a program that asks for the number n, and then a sequence of n numbers and finds the number of elements that end with 8.​*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;   // User inputs number of elements that will be checked

    int count = 0; // Variable for storing amount of the numbers that end with 8

    for (int i = 0; i < n; i++) { // Counter for number entering

        int num; cin >> num; // Sequence of n numbers

        if (num % 10 == 8) { // Numbers that end with 8 will have 8 in remainder after dividing by 10

            count++; // Storring numbers that end with 8
        }
    }
    cout << "Number of elements that end with 8: " << count << endl; // Output

}