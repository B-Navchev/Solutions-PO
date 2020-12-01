//01.12.2020
//Loops
//find the sum of positive numbers up to the entered integer
//if the user enters a negative number, the loop ends

#include<iostream>
using namespace std;

int main()
{
	int num, sum = 0;
	cout << "Enter a positive integer: ";
	cin >> num;
	for (int i = 1; i <= num; ++i)
	{
		sum += i;
	}
	cout << "The sum is: " << sum << endl;
	return 0;
}