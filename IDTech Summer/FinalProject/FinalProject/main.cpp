#include "story.h"
#include "calculator.h"

int main() {
	bool stopped = false;
	while (!stopped) {
		cout << "Welcome! What would you like to play? You can play madlibs, magic8ball, rockpaperscissors, or calculator?" << endl;
		string gameChoice;
		cin >> gameChoice;
		cin.ignore();
		cout << "" << endl;
		if (gameChoice == "stop") {
			stopped = true;
			break;
		}
		if (gameChoice == "madlibs") {
			bool exited = false;
			while (!exited) {
				cout << "Pick a story: thanksgiving, lunch, recess, or vacation? Enter 'exit' to play another game." << endl;
				string storyChoice;
				cin >> storyChoice;
				cin.ignore();

				string line1;
				string line2;
				string line3;
				string line4;
				string line5;
				string line6;
				string line7;
				string line8;

				if (storyChoice == "exit") {
					exited = true;
					cout << "" << endl;
					break;
				}

				story* stor = new story();

				if (storyChoice == "thanksgiving") {
					cout << "" << endl;
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
					cout << "Name a plural noun:" << endl;
					cin >> line8;
					cout << "" << endl;
					stor->thanksgivingStory(line1, line2, line3, line4, line5, line6, line7, line8);
					cout << "" << endl;
				}
				else if (storyChoice == "lunch") {
					cout << "" << endl;
					cout << "Name a type of container:" << endl;
					cin >> line1;
					cout << "Name an adjective:" << endl;
					cin >> line2;
					cout << "Name another adjective:" << endl;
					cin >> line3;
					cout << "Name an animal:" << endl;
					cin >> line4;
					cout << "Name a number:" << endl;
					cin >> line5;
					cout << "Name a vegetable:" << endl;
					cin >> line6;
					cout << "Name a liquid:" << endl;
					cin >> line7;
					cout << "" << endl;
					stor->lunchStory(line1, line2, line3, line4, line5, line6, line7);
					cout << "" << endl;
				}
				else if (storyChoice == "recess") {
					cout << "" << endl;
					cout << "Name a part of the body:" << endl;
					cin >> line1;
					cout << "Name a noun:" << endl;
					cin >> line2;
					cout << "Name a vegetable:" << endl;
					cin >> line3;
					cout << "Name an -ing verb:" << endl;
					cin >> line4;
					cout << "Name a noun:" << endl;
					cin >> line5;
					cout << "Name a type of class:" << endl;
					cin >> line6;
					cout << "Name a place:" << endl;
					cin >> line7;
					cout << "" << endl;
					stor->recessStory(line1, line2, line3, line4, line5, line6, line7);
					cout << "" << endl;
				}
				else if (storyChoice == "vacation") {
					cout << "" << endl;
					cout << "Name a celebrity:" << endl;
					getline(cin, line1);
					cout << "Name a place:" << endl;
					cin >> line2;
					cout << "Name an adjective:" << endl;
					cin >> line3;
					cout << "Name a plural form of a food:" << endl;
					cin >> line4;
					cout << "Name a type of building:" << endl;
					cin >> line5;
					cout << "Name a verb:" << endl;
					cin >> line6;
					cout << "Name another verb:" << endl;
					cin >> line7;
					cout << "" << endl;
					stor->vacationStory(line1, line2, line3, line4, line5, line6, line7);
					cout << "" << endl;
				}
			}
		}
		else if (gameChoice == "magic8ball") {
			bool exited = false;
			while (!exited) {
				string question;
				cout << "Ask me a question... Enter 'exit' to play another game." << endl;
				getline(cin, question);
				if (question == "exit") {
					exited = true;
					cout << "" << endl;
					break;
				}
				
				srand(time(0));
				int answer = rand() % 8;

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
		}
		else if (gameChoice == "rockpaperscissors") {
			string rsp;
			int computerScore = 0;
			int userScore = 0;
			bool exited = false;
			while (!exited) {
				srand(time(0));
				int answer = rand() % 3;
				cout << "Rock, Paper, or Scissors?" << endl;
				cin >> rsp;
				if (rsp == "exit") {
					exited = true;
					cout << "Computer: " << computerScore << " User: " << userScore << endl;
					if (computerScore >= userScore) {
						cout << "The computer wins! You loose." << endl;
						cout << "" << endl;
					}
					else if (computerScore <= userScore) {
						cout << "You win. You are smarter than a computer." << endl;
						cout << "" << endl;
					}
					else if (computerScore == userScore) {
						cout << "You tied with the computer. I guess you will have a rematch soon." << endl;
						cout << "" << endl;
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
		else if (gameChoice == "calculator") {
			bool exited = false;
			while (!exited) {
				cout << "Do you want to square, square root(enter 'root' to get the square root), multiply, divide, add, or subtract? Enter 'exit' to play another game." << endl;
				string calcType;
				cin >> calcType;
				int val1 = 0;
				int val2 = 0;
				if (calcType == "exit") {
					exited = true;
					cout << "" << endl;
					break;
				}
				calculator* cal = new calculator();
				if (calcType == "add") {
					cout << "Enter number 1: " << endl;
					cin >> val1;
					cout << "Enter number 2: " << endl;
					cin >> val2;
					cal->add(val1, val2);
				}
				else if (calcType == "subtract") {
					cout << "Enter number 1: " << endl;
					cin >> val1;
					cout << "Enter number 2: " << endl;
					cin >> val2;
					cal->subtract(val1, val2);
				}
				else if (calcType == "multiply") {
					cout << "Enter number 1: " << endl;
					cin >> val1;
					cout << "Enter number 2: " << endl;
					cin >> val2;
					cal->multiply(val1, val2);
				}
				else if (calcType == "divide") {
					cout << "Enter number 1: " << endl;
					cin >> val1;
					cout << "Enter number 2: " << endl;
					cin >> val2;
					cal->divide(val1, val2);
				}
				else if (calcType == "square") {
					cout << "Enter number: " << endl;
					cin >> val1;
					cal->square(val1);
				}
				else if (calcType == "root") {
					cout << "Enter number: " << endl;
					cin >> val1;
					cal->root(val1);
				}

			}
		}
	}
}