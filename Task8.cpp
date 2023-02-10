#include<iostream>
using namespace std;

int main()
{
	int noOfColors;

	cout << "Enter the number of colors: ";
	cin >> noOfColors;

	string colors[noOfColors];

	int timeToColor;
	int timeToSwitch = -1;
	int totalTime;

	cout << "Enter the colors: ";
	for (int i = 0; i < noOfColors; i++)
	{
		cin >> colors[i];
	}

	timeToColor = 2 * noOfColors;

	for (int i = 0; i < noOfColors; i++)
	{
		if (colors[i] != colors[i + 1])
		{
			timeToSwitch++;
		}
	}
	totalTime = timeToColor + timeToSwitch;

	cout << "Total Time Taken to color = " << totalTime << endl;
	

	return 0;
}