//01.12.2020
//Loops
//find the sum of positive numbers
//if the user enters a negative number, the loop ends

#include<iostream>
using namespace std;

int main()
{
	int number, sum = 0;
	cout << "Enter a number: ";
	cin >> number;
	while (number >= 0)
	{
		sum += number;
		cout << "Enter a number: ";
		cin >> number;
	}
	cout << "\nThe sum is: " << sum << endl;

	return 0;
}