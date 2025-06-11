#include "Calculator_Only.h"

#include <iostream>
using namespace std;

Calculator_Only::Calculator_Only(int param1, int param2) {
	a = param1;
	b = param2;
}
int Calculator_Only::add() {
	return a + b;
}

int Calculator_Only::min() {
	return a - b;

}

int Calculator_Only::mul() {
	return a * b;
}

int Calculator_Only::div() {
	return a / b;
}