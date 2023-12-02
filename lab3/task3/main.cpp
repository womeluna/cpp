#include <iostream>
#include <cmath>

using namespace std;

// Функция для расчета площади равностороннего треугольника
double calculateArea(double side) {
    // Формула для площади равностороннего треугольника: (sqrt(3) / 4) * side^2
    return (sqrt(3) / 4) * pow(side, 2);
}

// Функция для расчета площади разностороннего треугольника
double calculateArea(double a, double b, double c) {
    // Используем формулу Герона для расчета площади по сторонам
    double s = (a + b + c) / 2;
    // Формула для площади разностороннего треугольника: sqrt(s * (s - a) * (s - b) * (s - c))
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int choice;

    // Выводим меню выбора
    cout << "Select the type of triangle:\n";
    cout << "1. Equilateral\n";
    cout << "2. Versatile\n";
    // Получаем выбор пользователя
    cin >> choice;

    if (choice == 1) {
        double side;
        // Получаем длину стороны для равностороннего треугольника
        cout << "Enter the length of the side of the equilateral triangle:: ";
        cin >> side;

        // Вызываем функцию расчета площади равностороннего треугольника
        double area = calculateArea(side);
        // Выводим результат
        cout << "Area of the triangle: " << area << endl;
    }
    else if (choice == 2) {
        double a, b, c;
        // Получаем длины сторон для разностороннего треугольника
        cout << "Enter the lengths of the sides of versatile triangle (separated by a space): ";
        cin >> a >> b >> c;

        // Вызываем функцию расчета площади разностороннего треугольника
        double area = calculateArea(a, b, c);
        // Выводим результат
        cout << "Area of the triangle: " << area << endl;
    }

    return 0;
}
