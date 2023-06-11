#include <string>
#include <iostream>
using namespace std;

bool blastOff();

bool blastOff()
{
	char confirmation;
	cout << "Enter 'y' to launch or 'n' to cancel." << endl;
	cin >> confirmation;

	if (confirmation == 'y')
		return true;
	else
		return false;
}

int main()
{
	bool launch;
	launch = blastOff();

	if (launch == true)
	{
		for (int i = 10; i > 0; i--)
		{
			cout << i << " seconds until launch" << endl;
		}
		cout << "The rocket has launched." << endl;
	}
	else
	{
		cout << "The launch has been aborted." << endl;
	}
}