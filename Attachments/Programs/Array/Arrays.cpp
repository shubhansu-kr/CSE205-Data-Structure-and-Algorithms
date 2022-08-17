#include <iostream>
using namespace std;
int main()
{
	// Dynamic 1D array:
	int *a;
	a = new int[10];
	cout << "Enter the elements of array:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "array is:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	// Dynamic 2D array:
	int **b;
	b = new int *[4];
	for (int i = 0; i < 4; i++)
	{
		b[i] = new int[2];
	}
	cout << "Enter the elements of 2d array:" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> b[i][j];
		}
	}
	cout << "2d array is:" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
// Write a program to add two 2d dynamic arrays.
