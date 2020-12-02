#include <iostream>

using namespace std;

int  const maxn = 10;
int n;
float A[maxn], B[maxn], C[maxn];
void ReadArray(float M[maxn], int n)
{
	int i;
	cout << "ReadArray: " << "\n";
	for (i = 0; i < n ; i++)
	{
		cout << "Input M[" << i << "]=";
		cin >> M[i];
	}
}
void WriteArray(float M[maxn], int n)
{
	int i;
	cout << "WriteArray: " << "\n";
	for (i = 0; i <= n - 1; i++)
		cout << "Input M[" << i << "]=" << M[i] << "\n";
}
void Boublesort(float M[maxn], int n)
{
	int i, j;
	cout << "Boublesort: " << "\n";
	float R;
	for (i = n; i >= 2; i--)
	{
		for (j = 0; j <= i - 2; j++)
			if (M[j] > M[j + 1])
			{
				R = M[j];
				M[j] = M[j + 1];
				M[j + 1] = R;
			}
	}
}
int main()
{
	cout << endl;
	ReadArray(A, 6);
	Boublesort(A, 6);
	WriteArray(A, 6);

	cout << endl;
	
	ReadArray(B, 10);
	Boublesort(B, 10);
	WriteArray(B, 10);

	cout << endl;
	ReadArray(C, 8);
	Boublesort(C, 8);
	WriteArray(C, 8);
	return 0;
}
