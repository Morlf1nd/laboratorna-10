#include <iostream>
#include <cmath>

int main() {
    setlocale(0, ".1251");


    std::cout << "Введiть низку чисел для обчислення задачi" << std::endl;
    double x;
    std::cout << "Ведiть значення х: ";
    std::cin >> x;
    double n;
    std::cout << "Ведiть значення n: ";
    std::cin >> n;
tryAgain:
    double y;
    std::cout << "Ведiть значення y: ";
    std::cin >> y;

    if (std::cos(y) == 0)
    {
        std::cout << "Косинус(y) не може дорiвнювати нулю. Змiнiть значення y";
        goto tryAgain;
    }
    double result = x + (0.5 * n + 4.8) / std::cos(y);
    std::cout << "Вiдповiддю на рiвняння є " << result;



}