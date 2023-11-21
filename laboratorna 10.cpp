#include <iostream>
#include <cmath>
int main()
{
//Завдання 1.1
    double p = 3.14;
    std::cout << "Enter radiys: ";
    int r;
    std::cin >> r;
    std::cout << "Enter action p/s: ";
    char a;
    std::cin >> a;
    switch (a)
    {
    case('p'):
        std::cout << "The radiys is: " << 2 * r * p;
        break;
    case('s'):
        std::cout << "The square is: " << p * r * r;
        break;
    default:
        std::cout << "Wrong answer";
        break;
    }
}