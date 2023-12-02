#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>

int main() {
    std::string input;

    // Вводим все аргументы в одну строку с клавиатуры
    std::cout << "Enter program name, operation flag (-a or -m), and two integers: ";
    std::getline(std::cin, input);

    // Разбиваем ввод на составляющие
    std::istringstream iss(input);
    std::string programName, operation;
    int operand1, operand2;

    iss >> programName >> operation >> operand1 >> operand2;

    // Проверка на наличие всех аргументов
    if (!(iss >> programName >> operation >> operand1 >> operand2)) {
        std::cout << "Error: Invalid input format." << std::endl;
        return 1;  // Возвращаем код ошибки
    }

    // Проверка на формат второго параметра
    if (operation != "-a" && operation != "-m") {
        std::cout << "Error: Invalid operation format. Use -a for addition or -m for multiplication." << std::endl;
        return 1;  // Возвращаем код ошибки
    }

    // Выполняем операцию в зависимости от параметра
    int result;
    if (operation == "-a") {
        result = operand1 + operand2;
        std::cout << "Result of addition: " << result << std::endl;
    }
    else {
        result = operand1 * operand2;
        std::cout << "Result of multiplication: " << result << std::endl;
    }

    return 0;  // Возвращаем успешный код завершения
}
