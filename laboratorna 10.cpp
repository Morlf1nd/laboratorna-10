#include <iostream>
#include <cmath>
int main()
{
	setlocale(0, ".1251");
	const double M = 3.8;
	const double p = 2;
	double t = exp(M + 1);
	double x = pow(t, 2) + p;
	double y = log(fabs(x + t));
	std::cout << "Вiдповiдь y= " << y << std::endl;
}