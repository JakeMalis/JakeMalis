#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class calculator {
public:
	calculator();
	void add(int val1, int val2);
	void subtract(int val1, int val2);
	void multiply(int val1, int val2);
	void divide(int val1, int val2);
	void square(int val1);
	void root(int val1);
};