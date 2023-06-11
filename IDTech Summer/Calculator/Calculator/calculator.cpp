#include "calculator.h"

calculator::calculator() {

}
void calculator::add(int val1, int val2) {
	int answer = val1 + val2;
	cout << "The answer is " << answer << endl;
}
void calculator::subtract(int val1, int val2) {
	int answer = val1 - val2;
	cout << "The answer is " << answer << endl;
}
void calculator::multiply(int val1, int val2) {
	int answer = val1 * val2;
	cout << "The answer is " << answer << endl;
}
void calculator::divide(int val1, int val2) {
	int answer = val1 / val2;
	cout << "The answer is " << answer << endl;
}
void calculator::square(int val1) {
	int answer = val1 * val1;
	cout << "The answer is " << answer << endl;
}
void calculator::root(int val1) {
	int answer = sqrt(val1);
	cout << "The answer is " << answer << endl;
}