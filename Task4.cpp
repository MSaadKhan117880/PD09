#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the no. of digits: ";
	cin >> n;

	float arr1[n];
	bool found = false;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == 7)
		{
			found = true;
		}
	}

	if (found == true)
	{
		cout << "Boom!" << endl;
	}
	else
	{
		cout << "There is no 7 in the array." << endl;
	}

	return 0;
}