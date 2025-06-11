#include <iostream>
#include "Calculator_Only.h";
#include "User.h"

using namespace std;



int main() {
	Calculator_Only a(3, 4);
	User print;
	int b = a.add();
	print.printInfo(b);
	







	return 0;
}