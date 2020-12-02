//I/O in function
#include<iostream>

using namespace std;

void printNum()
{
	int n;
	cout << "Enter an integer\n";
	cin >> n;
	cout << endl << "The integer is: " << n << endl;

}

int main()
{
	printNum();
	printNum();
	cout << "\nMade with a function\n";
	return 0;
}