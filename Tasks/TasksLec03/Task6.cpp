//01.12.2020
//Loops with break days and week

#include<iostream>
using namespace std;

int main()
{
	int weeks = 3, daysInWeek = 7;
	for (int i = 1; i <= weeks; i++)
	{
		cout << "Week: " << i << endl;
		for (int j = 1; j <= daysInWeek; j++)
		{
			/*if (i == 2)
			{
				break;
			}*/
			cout << "     Day: " << j << endl;
		}
	}
	return 0;
}