//Basic overload

#include<iostream>

using namespace std;

void doSth()
{
	cout << "\nHi\n";
}

void doSth(int a, int b)
{
	cout << "a + b = " << a + b << endl;
}

int main()
{
	doSth();
	doSth(5, 18);
	return 0;
}