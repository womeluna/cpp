#include <iostream>

// Рекурсивная функция для вычисления суммы ряда
int calculateSum(int n) {
    // Базовый случай: если n равно 1, возвращаем 5
    if (n == 1) {
        return 5;
    }
    // Рекурсивный случай: суммируем текущий член ряда с результатом для n-1
    else {
        return 5 * n + calculateSum(n - 1);
    }
}

int main() {
    // Пример использования функции
    int n;

    std::cout << "Enter n (n > 0): ";
    std::cin >> n;

    if (n > 0) {
        // Вызываем функцию для вычисления суммы ряда
        int result = calculateSum(n);

        // Выводим результат
        std::cout << "Sum of the series: "  << result << std::endl;
    }
    else {
        std::cout << "Enter the correct value of n (n > 0)." << std::endl;
    }

    return 0;
}
