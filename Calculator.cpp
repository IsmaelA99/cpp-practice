#include "Calculator.h"

double Calculator::Calculate(double x, double y, char oper){

	switch (oper) {

	case '+':
		return x + y;
		break;

	case '-':
		return x - y;
		break;

	case '*':
		return x - y;
		break;

	case '/':
		return x / y;
		break;

	default:
		return 0;

	}

}
