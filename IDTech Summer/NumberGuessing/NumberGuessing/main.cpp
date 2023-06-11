#include <iostream>
#include <string>
#include <random>
#include <time.h>

using namespace std;

int main() {
	int guess;
	srand(time(0));
	int number = rand() % 100;
	bool guessed = false;
	while (!guessed) {
		cout << "Take a guess:" << endl;
		cin >> guess;
		if (guess == number) {
			cout << "You guessed right! Congrats" << endl;
			guessed = true;
			break;
		}
		else if (guess <= number) {
			cout << "Too low." << endl;
		}
		else if (guess >= number) {
			cout << "Too high." << endl;
		}
	}
}