//01.12.2020
//Loops nested

#include<iostream>
using namespace std;

int main()
{
	int rows = 3;
	int columns = 5;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= columns; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}