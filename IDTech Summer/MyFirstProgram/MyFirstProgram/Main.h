#pragma once
#include <string>
#include <iostream>
using namespace std;

int main() {
	string myName;
	cout << "What is your name?" << endl;
	cin >> myName;
	cout << "Hello " << myName << "! Nice to meet you." << endl;
	return 0;
}