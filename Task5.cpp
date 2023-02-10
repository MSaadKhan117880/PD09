#include<iostream>
using namespace std;

int main()
{
	string slot[4];

	int count = 0;

	cout << "Enter the characters: ";

	for (int i = 0; i < 4; i++)
	{
		cin >> slot[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (slot[0] == slot[i])
		{
			count++;
		}
	}

	if (count < 4)
	{
		cout << "False" << endl;
	}
	else if (count == 4)
	{
		cout << "True" << endl;
	}

	return 0;
}