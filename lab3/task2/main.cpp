#include <iostream>
#include <cmath>

// Функция для вычисления кубического корня с использованием стандартной функции pow
double cubicRootUsingPow(double a) {
    return pow(a, 1.0 / 3);
}

// Функция для вычисления кубического корня с использованием итерационной формулы
double cubicRootUsingIteration(double a) {
    double x = 1.0; // Начальное значение
    for (int i = 0; i < 100; ++i) { // Итерационный процесс (можно выбрать другое количество итераций)
        x = (1.0 / 3) * (a / (x * x) + 2 * x);
    }
    return x;
}

int main() {
    // Тестирование функций
    double number;
    std::cout << "Enter number: ";
    std::cin >> number;
    double resultPow = cubicRootUsingPow(number);
    double resultIteration = cubicRootUsingIteration(number);

    std::cout << "Cube root via pow function: " << resultPow << std::endl;
    std::cout << "Cube root via iterative formula: " << resultIteration << std::endl;

    return 0;
}
