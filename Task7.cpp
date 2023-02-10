#include<iostream>
using namespace std;

int main()
{
	string str1;
	string str2;

	cout << "Enter a word: ";
	cin >> str1;
	cout << "Enter a word: ";
	cin >> str2;

	int lenstr1 = str1.length();
	int lenstr2 = str2.length();
	int count = 0;

	for (int i = 0; i < lenstr1; i++)
	{
		for (int j = 0; j < lenstr2; j++)
		{
			if (str1[i] == str2[j])
			{
				count++;
				str2[j] = '-';
				break;
			}
			/*else
			{
				continue;
			}*/
		}
	}

	cout << "The common characters = " << count << endl;

	return 0;
}