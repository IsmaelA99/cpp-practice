#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {

	// Note: If you write a character instead of a number, loop is caused.

	Calculator calculator;

	double x = 0.0;
	double y = 0.0;
	char oper = '+';

	int start = 1;

	double result = 0.0;

	cout << endl << "Calculator Console Application" << endl << endl;

	cout << "Please enter the operation to perform"
		 << endl
		 << "Format -> A + B | A - B | A * B | A / B"
		 << endl
		 << endl;

	while (start) {

		cout << "Introduce A:" << endl << endl;

		cin >> x;
		cout << endl;
		
		cout << "Introduce B:" << endl << endl;
		
		cin >> y;
		cout << endl;

		cout << "Introduce the operator:" << endl << endl;

		cin >> oper;
		cout << endl;
		
		result = calculator.Calculate(x, y, oper);

		cout << "Result is -> " << result << endl << endl;

		cout << "Calculation finished, would you like to do a calculation again??" << endl << "Enter 1 to calculate again or 0 to exit" << endl << endl;

		cin >> start;

		cout << endl;

	}

	return 0;

}