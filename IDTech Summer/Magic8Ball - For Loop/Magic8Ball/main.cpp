#include  <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int main() {
	string question;
	int amountOfQuestions;
	cout << "How many questions do you have?" << endl; 
	cin >> amountOfQuestions;
	cin.ignore();
	int count = 0;

	for (int count = 0; count < amountOfQuestions; count++) {
		cout << "Ask me a question" << endl;
		getline(cin, question);
		srand(time(0));
		int answer = rand() % 9;
		switch (answer) {
		case 0:
			cout << "Yes" << endl;
			break;

		case 1:
			cout << "Nope" << endl;
			break;

		case 2:
			cout << "Ask again later" << endl;
			break;

		case 3:
			cout << "It is certain" << endl;
			break;

		case 4:
			cout << "Most likely" << endl;
			break;

		case 5:
			cout << "Better not tell you now" << endl;
			break;

		case 6:
			cout << "Without a doubt" << endl;
			break;

		case 7:
			cout << "My sources say no" << endl;
			break;

		case 8:
			cout << "Outlook not so good" << endl;
			break;

		}

	}
	return 0;
}