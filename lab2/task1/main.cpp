#include <iostream>
#include <cmath>

int main() {
    // »спользуем целочисленный тип данных дл€ представлени€ числа
    int number;

    // ѕолучаем число от пользовател€
    std::cout << "Enter number: ";
    std::cin >> number;

    // ѕровер€ем, €вл€етс€ ли число простым
    bool isPrime = true;
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    // ≈сли число не простое, выводим сообщение и завершаем программу
    if (!isPrime) {
        std::cout << number << " is not prime.\n";
        return 0;
    }

    // ѕровер€ем, €вл€етс€ ли позици€ числа в списке простых чисел простым числом
    isPrime = true;
    for (int i = 2; i <= sqrt(number - 1); ++i) {
        if ((number - 1) % i == 0) {
            isPrime = false;
            break;
        }
    }

    // ¬ыводим результат на основе проверок
    if (isPrime) {
        std::cout << number << " is superprime.\n";
    }
    else {
        std::cout << number << " is not superprime.\n";
    }

    return 0;
}
