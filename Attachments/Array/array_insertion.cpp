#include <iostream>
using namespace std;
int main()
{
	int *p;
	int n;
	cout << "enter the value of n ie. elements in array:" << endl;
	cin >> n;
	p = new int[n + 1];
	cout << "Enter the array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	cout << "the array is:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << "  ";
	}
	cout << endl;
	int x;
	cout << "enter the position of element where you want to insert:" << endl;
	cin >> x;
	int y;
	cout << "the element to be inserted is:" << endl;
	cin >> y;
	for (int i = n - 1; i >= x - 1; i--)
	{
		p[i + 1] = p[i]; // shifting right side
	}
	p[x - 1] = y;
	for (int i = 0; i < n + 1; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	int d;
	cout << "enter the position of element from where you want to delete:" << endl;
	cin >> d;
	for (int i = d - 1; i < n; i++)
	{
		p[i] = p[i + 1]; // shifting left side
	}
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
