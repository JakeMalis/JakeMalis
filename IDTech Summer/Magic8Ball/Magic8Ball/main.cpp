#include  <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int main() {
	string question;
	bool stopped = false;
	while (!stopped) {
		cout << "Ask me a question" << endl;
		getline(cin, question);
		srand(time(0));
		int answer = rand() % 8;

		if (question == "quit") {
			stopped = true;
			break;
		}

		if (answer == 0) {
			cout << "Yes" << endl;
		}
		else if (answer == 1) {
			cout << "Nope" << endl;
		}
		else if (answer == 2) {
			cout << "Ask again later" << endl;
		}
		else if (answer == 3) {
			cout << "It is certain" << endl;
		}
		else if (answer == 4) {
			cout << "Most likely" << endl;
		}
		else if (answer == 5) {
			cout << "Better not tell you now" << endl;
		}
		else if (answer == 6) {
			cout << "Without a doubt" << endl;
		}
		else if (answer == 7) {
			cout << "My sources say no" << endl;
		}
		else if (answer == 8) {
			cout << "Outlook not so good" << endl;
		}
	}
	return 0;
}