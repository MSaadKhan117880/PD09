#include<iostream>
#include<string>
using namespace std;

int main()
{

	string movies[] = { "Gladiator","Star Wars","Terminator","Taking Lives","Tomb Raider" };
	int length = sizeof(movies) / sizeof(movies[0]);

	string movieName;
	float discount;
	float finalPrice;

	cout << "Enter the name of the name: ";
	getline(cin, movieName);

	for (int i = 0; i < length; i++)
	{
		if (movieName == movies[i])
		{
			if (i % 3 == 0)
			{
				discount = (5.0 / 100.0) * 500.0;
				finalPrice = 500 - discount;
			}
			else
			{
				discount = (10.0 / 100.0) * 500.0;
				finalPrice = 500 - discount;
			}
		}
	}

	cout << "The final price = " << finalPrice << endl;

	return 0;
}