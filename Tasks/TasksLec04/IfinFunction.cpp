//C++ program returns the input number if the number is even
// If the number is odd returns ((temp * 3) + 1);
#include<iostream>

using namespace std;

int printSth(int a)
{
	int temp = a;
	if ((a > 0) && ((a % 2) == 0))
	{
		return temp;

	}
	else
	{
		return ((temp * 3) + 1);
	}

}

int main()
{
	int n, result;
	cout << "Enter number to be checked: ";
	cin >> n;
	result = printSth(n);
	cout << "The result is: " << result << endl << "Done\n";
	return 0;
}
