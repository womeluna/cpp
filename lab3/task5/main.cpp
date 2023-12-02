#include <iostream>

// Рекурсивная функция для перевода числа из десятичной системы в двоичную
void decimalToBinary(int num) {
    // Базовый случай: если num равно 0, завершаем рекурсию
    if (num == 0) {
        return;
    }

    // Рекурсивный случай: вызываем функцию для num / 2
    decimalToBinary(num / 2);

    // Выводим остаток от деления num на 2 (бит двоичного представления)
    std::cout << num % 2;
}

int main() {
    // Пример использования функции
    int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num > 0) {
        // Вызываем функцию для перевода числа из десятичной системы в двоичную
        std::cout << " " << num << ": ";
        decimalToBinary(num);
        std::cout << std::endl;
    }
    else {
        std::cout << "Enter the correct number" << std::endl;
    }

    return 0;
}
