//01.12.2020
//Loops
//find the sum of positive numbers
//if the user enters a negative number, the loop ends//DO

#include<iostream>
using namespace std;

int main()
{
	int number = 0, sum = 0;
	do
	{
		sum += number;
		cout << "Enter a number: ";
		cin >> number;
	} while (number >= 0);
	cout << "\nThe sum is: " << sum << endl;
	return 0;
}