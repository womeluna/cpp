#include <iostream>
#include <cmath>

int main() {
    // ���������� ������������� ��� ������ ��� ������������� �����
    int number;

    // �������� ����� �� ������������
    std::cout << "Enter number: ";
    std::cin >> number;

    // ���������, �������� �� ����� �������
    bool isPrime = true;
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    // ���� ����� �� �������, ������� ��������� � ��������� ���������
    if (!isPrime) {
        std::cout << number << " is not prime.\n";
        return 0;
    }

    // ���������, �������� �� ������� ����� � ������ ������� ����� ������� ������
    isPrime = true;
    for (int i = 2; i <= sqrt(number - 1); ++i) {
        if ((number - 1) % i == 0) {
            isPrime = false;
            break;
        }
    }

    // ������� ��������� �� ������ ��������
    if (isPrime) {
        std::cout << number << " is superprime.\n";
    }
    else {
        std::cout << number << " is not superprime.\n";
    }

    return 0;
}
