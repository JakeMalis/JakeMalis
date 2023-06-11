#include "calculator.h"

int main() {
	bool stopped = false;
	while (!stopped) {
		cout << "Do you want to square, square root(enter 'root' to get the square root), multiply, divide, add, or subtract?" << endl;
		string calcType;
		cin >> calcType;
		int val1 = 0;
		int val2 = 0;
		if (calcType == "stop") {
			stopped = true;
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