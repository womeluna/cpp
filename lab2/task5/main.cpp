#include <iostream>
#include <cmath>

int main() {
    const double radius1 = 2.0;
    const double radius2 = 4.0;

    int totalPoints = 0;
    int shotsCount = 0;

    // Запрос у пользователя цели (например, 50 баллов)
    int targetPoints;
    std::cout << "Enter a goal: ";
    std::cin >> targetPoints;

    // Цикл для ввода данных о выстрелах до достижения цели
    while (totalPoints < targetPoints) {
        double x, y;

        // Запрос у пользователя координат выстрела
        std::cout << "Enter the coordinates of the shot " << shotsCount + 1 << " (x y): ";
        std::cin >> x >> y;

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

        // Увеличиваем счетчик выстрелов
        shotsCount++;

        // Проверка, достигнута ли цель по баллам
        if (totalPoints >= 50) {
            break;
        }
    }

    std::cout << "Number of shots fired: " << shotsCount << std::endl;

    // Определяем уровень стрелка в зависимости от количества выстрелов
    if (shotsCount <= 5) {
        std::cout << "You are a sniper!\n";
    }
    else if (shotsCount <= 10) {
        std::cout << "You are an experienced shooter\n";
    }
    else {
        std::cout << "You are a beginner\n";
    }

    return 0;
}
