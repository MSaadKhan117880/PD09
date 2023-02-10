#include<iostream>
using namespace std;

int main()
{
	string word;

	cout << "Enter a word: ";
	cin >> word;

	bool odd = false;
	bool even = false;
	int length = word.length();

	if (length % 2 == 0)
	{
		even = true;
	}
	else 
	{
		odd = true;
	}

	if (even == true)
	{
		cout << "Even" << endl;
	}
	if (odd == true)
	{
		cout << "Odd" << endl;
	}

	return 0;
}