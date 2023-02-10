#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter no. of digits: ";
	cin >> n;

	int evenOdd[n];
	int evenOddTranform;
	cout << "Enter number of time even-odd transformation need to be done: ";
	cin >> evenOddTranform;

	cout << "Enter the numbers: ";
	for (int i = 0; i < n; i++)
	{
		cin >> evenOdd[i];
		while (evenOdd[i] < 0)
		{
			cout << "Invalid Number! Please enter positive integers: ";
			cin >> evenOdd[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (evenOdd[i] % 2 == 0)
		{
			evenOdd[i] = evenOdd[i] - (2 * evenOddTranform);
		}
		else
		{
			evenOdd[i] = evenOdd[i] + (2 * evenOddTranform);
		}
	}

	cout << "After even-odd transformation." << endl;
	cout << "{ ";
	for (int i = 0; i < n; i++)
	{
		cout << evenOdd[i] << ", ";
	}
	cout << "}" << endl;

	return 0;
}