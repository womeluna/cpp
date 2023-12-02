#include <iostream>
#include <limits>

bool Input(int& a, int& b) {
    std::cout << "Enter two positive integers a and b: ";

    // Проверка на корректность ввода
    while (!(std::cin >> a >> b)) {
        std::cerr << "Input error! The numbers must be integers: ";

        // Очищаем буфер ввода, чтобы избежать бесконечного цикла
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Проверяем положительные ли числа
    if (a < 0 || b < 0) {
        std::cerr << "Input error! The numbers must be positive:" << std::endl;
        return false;
    }

    return true; // Ввод прошел успешно
}

int main() {
    int a, b;
    if (!Input(a, b)) {
        std::cerr << "Error";
        return 1;
    }

    int s = a + b;
    std::cout << "Sum of a and b: " << s << std::endl;

    return 0;
}
