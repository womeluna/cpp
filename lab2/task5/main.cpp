#include <iostream>
#include <cmath>

int main() {
    const double radius1 = 2.0;
    const double radius2 = 4.0;

    int totalPoints = 0;
    int shotsCount = 0;

    // ������ � ������������ ���� (��������, 50 ������)
    int targetPoints;
    std::cout << "Enter a goal: ";
    std::cin >> targetPoints;

    // ���� ��� ����� ������ � ��������� �� ���������� ����
    while (totalPoints < targetPoints) {
        double x, y;

        // ������ � ������������ ��������� ��������
        std::cout << "Enter the coordinates of the shot " << shotsCount + 1 << " (x y): ";
        std::cin >> x >> y;

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

        // ����������� ������� ���������
        shotsCount++;

        // ��������, ���������� �� ���� �� ������
        if (totalPoints >= 50) {
            break;
        }
    }

    std::cout << "Number of shots fired: " << shotsCount << std::endl;

    // ���������� ������� ������� � ����������� �� ���������� ���������
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
