#include <iostream>
#include <string>

using namespace std;

int main()
{
	int hotDogsADay[7] = { 102, 57, 78, 98, 47, 212, 0 };

	for (int i = 0; i < 7; i++)
	{
		cout << "Enter the hot dogs you ate." << endl;
		cin >> hotDogsADay[i];
	}

	double hotDogAverage = 0;

	for (int i = 0; i < 7; i++)
	{
		hotDogAverage += hotDogsADay[i];
	}

	cout << "You ate " << hotDogAverage << " hot dogs this week." << endl;
	hotDogAverage = hotDogAverage / 7;
	cout << "On average you eat " << hotDogAverage << " hot dogs a day." << endl;
	if (hotDogAverage >= 3) {
		cout << "You should be dead! Death by sodium." << endl;
	}
}