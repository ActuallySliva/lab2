#include "calculator.h"
//Igor Khrebtovych
//IO-04
//igorkhrebtovych@gmail.com
//AK2
//Lab2
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
