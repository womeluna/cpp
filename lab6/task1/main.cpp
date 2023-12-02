#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Открываем файл для записи
    std::ofstream outputFile("poem.txt");

    // Проверяем, успешно ли открыт файл
    if (!outputFile.is_open()) {
        std::cerr << "Error opening the file for writing!" << std::endl;
        return 1;
    }

    // Запрос стихотворения от пользователя
    std::cout << "Enter a poem (type 'end' to finish): : " << std::endl;

    // Цикл ввода стихотворения
    std::string line;
    while (true) {
        std::getline(std::cin, line);

        // Проверка на завершение ввода
        if (line == "end") {
            break;
        }

        // Запись строки в файл
        outputFile << line << std::endl;
    }

    // Закрываем файл
    outputFile.close();

    std::cout << "The poem has been successfully written to the 'poem.txt' file.'" << std::endl;

    return 0;
}
