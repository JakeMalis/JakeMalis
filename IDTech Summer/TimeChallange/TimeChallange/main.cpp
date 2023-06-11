#include <iostream>
#include <string>
/*#include <random>
#include <time.h>*/

using namespace std;

int main() {
	long num = 0;
	cout << "Enter number";
	cin >> num;
	int fac = 2;
	while (num > 1) {
		if (num % fac == 0) {
			cout << fac << endl;
			num = num / fac;
		}
		else fac++;
	}
	return 0;
}