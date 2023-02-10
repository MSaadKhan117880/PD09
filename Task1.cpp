#include<iostream>
using namespace std;

int main()
{
	string fruits[] = { "peach","apple","guava","watermelon" };
	float prices[] = { 60.0,70.0,40.0,30.0 };

	string fruitName;
	int fruitQuantity;
	float totalPrice;

	cout << "Enter the fruit: ";
	cin >> fruitName;
	cout << "Enter the quantity of the fruit: ";
	cin >> fruitQuantity;
	while (fruitQuantity < 1)
	{
		cout << "Invalid Quantity! Re-enter the quantity of the fruit: ";
		cin >> fruitQuantity;
	}

	for (int i = 0; i < 4; i++)
	{
		if (fruitName == fruits[i])
		{
			totalPrice = prices[i] * fruitQuantity;
		}
	}
	cout << "Total Price = " << totalPrice << endl;

	return 0;
}