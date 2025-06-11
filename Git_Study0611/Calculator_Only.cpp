#include "Calculator_Only.h"
#include <iostream>
using namespace std;

Calculator_Only::Calculator_Only(int param1, int param2) {
	a = param1;
	b = param2;
}
void Calculator_Only::add() {
	cout << a + b << endl;
}

void Calculator_Only::min() {
	cout << a - b << endl;

}

void Calculator_Only::mul() {
	cout << a * b << endl;
}

void Calculator_Only::div() {
	cout << a / b << endl;
}