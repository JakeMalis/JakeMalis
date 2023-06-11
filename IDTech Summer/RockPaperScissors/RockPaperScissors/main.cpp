#include  <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int main() {
	string rsp;
	int computerScore = 0;
	int userScore = 0;
	bool stopped = false;
	while (!stopped) {
		srand(time(0));
		int answer = rand() % 3;
		cout << "Rock, Paper, or Scissors?" << endl;
		cin >> rsp;
		if (rsp == "stop") {
			stopped = true;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
			if (computerScore >= userScore) {
				cout << "The computer wins! You loose." << endl;
			}
			else if (computerScore <= userScore) {
				cout << "You win. You are smarter than a computer." << endl;
			}
			else if (computerScore == userScore) {
				cout << "You tied with the computer. I guess you will have a rematch soon." << endl;
			}

			break;
		} 
		/*#####################################################################*/
		if (answer == 0) {
			cout << "Computer picked: Rock" << endl;
		}
		else if (answer == 1) {
			cout << "Computer picked: Paper" << endl;
		}
		else if (answer == 2) {
			cout << "Computer picked: Scissors" << endl;
		}
		/*#####################################################################*/
		if (answer == 0 && (rsp == "rock" || rsp == "Rock")) {
			cout << "It is a tie." << endl;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 0 && (rsp == "paper" || rsp == "Paper")) {
			cout << "You win." << endl;
			userScore++;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 0 && (rsp == "scissors" || rsp == "Scissors")) {
			cout << "You loose." << endl;
			computerScore++;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 1 && (rsp == "rock" || rsp == "Rock")) {
			cout << "You loose." << endl;
			computerScore++;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 1 && (rsp == "paper" || rsp == "Paper")) {
			cout << "It is a tie." << endl;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 1 && (rsp == "scissors" || rsp == "Scissors")) {
			cout << "You win." << endl;
			userScore++;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 2 && (rsp == "rock" || rsp == "Rock")) {
			cout << "You win." << endl;
			userScore++;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 2 && (rsp == "paper" || rsp == "Paper")) {
			cout << "You loose." << endl;
			computerScore++;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
		else if (answer == 2 && (rsp == "scissors" || rsp == "Scissors")) {
			cout << "It is a tie." << endl;
			cout << "Computer: " << computerScore << " User: " << userScore << endl;
		}
	}
}