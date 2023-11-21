#include <iostream>
#include <cmath>
int main()
{
	setlocale(0, ".1251");
	const int t1 = 1;
	const int t2 = 2;
	int g;
	std::cout << "Enter fastening: ";
	std::cin >> g;
	std::cout << "Пiсля 1 секунди тiло пройшло: " << (g * pow(t1, 2)) / 2 << std::endl;
	std::cout << "Пiсля 2 секунд тiло пройшло: " << (g * pow(t2, 2)) / 2;

}