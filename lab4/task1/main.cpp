#include <iostream>
#include <cmath>

// Функция для вычисления действительных корней квадратного уравнения
// Возвращает:
//  1 - если корни найдены,
//  0 - если оба корня совпадают,
// -1 - если корней не существует.
int Myroot(double a, double b, double c, double& x1, double& x2) {

    // Вычисляем дискриминант
    double discriminant = b * b - 4 * a * c;

    // Проверяем значения дискриминанта
    if (discriminant > 0) {
        // Два различных корня
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        return 1;
    }
    else if (discriminant == 0) {
        // Один корень
        x1 = x2 = -b / (2 * a);
        return 0;
    }
    else {
        // Корней нет
        return -1;
    }
}

int main() {
    // Пример использования функции
    double a, b, c, x1, x2;

    // Ввод коэффициентов квадратного уравнения
    std::cout << "Enter the coefficients (a, b, c): ";
    std::cin >> a >> b >> c;

    // Вызываем функцию для вычисления корней
    int result = Myroot(a, b, c, x1, x2);

    // Выводим результат
    if (result == 1) {
        std::cout << "The roots of the equation: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (result == 0) {
        std::cout << "The roots of the equation match: x1 = x2 = " << x1 << std::endl;
    }
    else {
        std::cout << "There are no roots of the equation" << std::endl;
    }

    return 0;
}
