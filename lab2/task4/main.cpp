#include <iostream>
#include <cmath>

int main() {
    // ������� ��� ������
    const double radius1 = 2.0;
    const double radius2 = 4.0;

    // ����� ���������� ����� � ���������� ���������
    int totalPoints = 0;
    int shotsCount;

    // ������ � ������������ ���������� ���������
    std::cout << "Enter the number of shots: ";
    std::cin >> shotsCount;

    // ���� ��� ��������� ������� ��������
    for (int i = 1; i <= shotsCount; ++i) {
        double x, y;

        // ������ � ������������ ��������� ��������
        std::cout << "Enter the coordinates of the shot " << i << " (x y): ";
        std::cin >> x >> y;

        // ������������ ���������� �� ������ ������
        double distance = std::sqrt(x * x + y * y);

        // ��������� ��������� �������� � ��������� �����
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

    // ������� ����� ���������� �����
    std::cout << "The sum of your points: " << totalPoints << std::endl;

    return 0;
}
