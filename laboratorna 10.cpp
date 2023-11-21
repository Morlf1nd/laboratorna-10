#include <iostream>
#include <cmath>
int main()
{
	setlocale(0, ".1251");
	std::cout << "Введiть х: ";
	double x;
	std::cin >> x;
	double z1 = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));
	double z2 = sqrt((x + 3) / (x - 3));
	std::cout << " Z1=" << z1 << " Z2=" << z2<<" I тому цi рiвняння рiвнi";
}