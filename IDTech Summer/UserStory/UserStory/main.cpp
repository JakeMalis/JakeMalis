#include <string>
#include <iostream>
using namespace std;

int main() {
	string line1;
	string line2;
	string line3;
	string line4;
	string line5;
	string line6;
	string line7;
	string line8a;
	string line8b;

	cout << "Name an adjective:" << endl;
	cin >> line1;
	cout << "Name an adjective:" << endl;
	cin >> line2;
	cout << "Name a room in a house:" << endl;
	cin >> line3;
	cout << "Name a past tense verb:" << endl;
	cin >> line4;
	cout << "Name a noun:" << endl;
	cin >> line5;
	cout << "Name a liquid:" << endl;
	cin >> line6;
	cout << "Name a part of the body:" << endl;
	cin >> line7;
	cout << "Pick a number:" << endl;
	cin >> line8a;
	cout << "Name a plural noun:" << endl;
	cin >> line8b;

	cout << "It was a " << line1 << ", cold November day." << endl;
	cout << "I woke up to the " << line2 << " smell of turkey." << endl;
	cout << "My parents were roasting it in the " << line3 << "." << endl;
	cout << "I " << line4 << " down the stairs to see if I could help with dinner." << endl;
	cout << "My mother said, 'See if grandma needs a fresh " << line5 << ".'" << endl;
	cout << "Grandma asked me for a drink, so I brought down a tray of glasses full of " << line6 << " for her." << endl;
	cout << "When I got there I couldn't believe my " << line7 << "." << endl;
	cout << "There were " << line8a << " " << line8b << " running around on the table! It was a crazy Thanksgiving." << endl;
}