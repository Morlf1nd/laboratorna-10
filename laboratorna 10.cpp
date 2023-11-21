#include <iostream>
#include <cmath>
int main()
{
	setlocale(0, ".1251");
	const int i = 16;
	int xA = 0, yA = 0, xB = i, yB = i - 1, xC = -i, yC = i + 1;
	double h = std::fabs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB)) / std::pow((xB - xC), 2) + std::pow((xB - xC), 2);
	double AB_L = std::sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	double AC_L = std::sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	double wA = (2 * AB_L * AC_L) / (AB_L + AC_L);
	std::cout << "Висота: " << h << std::endl;
	std::cout << "Бiсектриса: " << wA << std::endl;
}