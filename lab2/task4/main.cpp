#include <iostream>
#include <cmath>

int main() {
    // Радиусы зон мишени
    const double radius1 = 2.0;
    const double radius2 = 4.0;

    // Общее количество очков и количество выстрелов
    int totalPoints = 0;
    int shotsCount;

    // Запрос у пользователя количества выстрелов
    std::cout << "Enter the number of shots: ";
    std::cin >> shotsCount;

    // Цикл для обработки каждого выстрела
    for (int i = 1; i <= shotsCount; ++i) {
        double x, y;

        // Запрос у пользователя координат выстрела
        std::cout << "Enter the coordinates of the shot " << i << " (x y): ";
        std::cin >> x >> y;

        // Рассчитываем расстояние от центра мишени
        double distance = std::sqrt(x * x + y * y);

        // Оцениваем результат выстрела и начисляем баллы
        if (distance <= radius1) {
            std::cout << "A hit! +10 points\n";
            totalPoints += 10;
        }
        else if (distance <= radius2) {
            std::cout << "A hit! +5 points\n";
            totalPoints += 5;
        }
        else {
            std::cout << "A miss. 0 points\n";
        }
    }

    // Выводим общее количество очков
    std::cout << "The sum of your points: " << totalPoints << std::endl;

    return 0;
}
