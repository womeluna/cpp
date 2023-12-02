#include <iostream>

// Структура для представления времени
struct Time {
    int hours;    // Часы
    int minutes;  // Минуты
    int seconds;  // Секунды
};

// Функция для вывода приглашения и считывания значения времени
int getInput(const char* prompt) {
    int value;
    std::cout << prompt << ": ";
    std::cin >> value;
    return value;
}

// Функция для вычисления общего количества секунд в структуре Time
int calculateTotalSeconds(const Time& time) {
    return time.hours * 3600 + time.minutes * 60 + time.seconds;
}

// Функция для сложения двух интервалов времени
Time addTime(const Time& t1, const Time& t2) {
    // Вычисляем общее количество секунд для каждого временного интервала
    int totalSeconds = calculateTotalSeconds(t1) + calculateTotalSeconds(t2);

    // Разделяем общее количество секунд на часы, минуты и секунды
    Time result;
    result.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    result.minutes = totalSeconds / 60;
    result.seconds = totalSeconds % 60;

    return result;
}

// Функция для вычитания одного интервала времени из другого
Time subtractTime(const Time& t1, const Time& t2) {
    // Вычисляем общее количество секунд для каждого временного интервала
    int totalSeconds = calculateTotalSeconds(t1) - calculateTotalSeconds(t2);

    // Разделяем общее количество секунд на часы, минуты и секунды
    Time result;
    result.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    result.minutes = totalSeconds / 60;
    result.seconds = totalSeconds % 60;

    return result;
}

int main() {
    // Ввод времени пользователя для первого интервала
    Time time1;
    time1.hours = getInput("Enter hours");
    time1.minutes = getInput("Enter minutes");
    time1.seconds = getInput("Enter seconds");

    // Ввод времени пользователя для второго интервала
    Time time2;
    time2.hours = getInput("Enter hours for the 2nd time");
    time2.minutes = getInput("Enter minutes for the 2nd time");
    time2.seconds = getInput("Enter seconds for the 2nd time");

    // Вывод общего количества секунд для каждого введенного времени
    std::cout << "Total seconds in the 1st time: " << calculateTotalSeconds(time1) << std::endl;
    std::cout << "Total seconds in the 2nd time: " << calculateTotalSeconds(time2) << std::endl;

    // Сложение временных интервалов и вывод результата
    Time sumResult = addTime(time1, time2);
    std::cout << "Sum of time intervals: " << sumResult.hours << " hours, " << sumResult.minutes << " minutes, " << sumResult.seconds << " seconds" << std::endl;

    // Вычитание временных интервалов и вывод результата
    Time diffResult = subtractTime(time1, time2);
    std::cout << "Difference of time intervals: " << diffResult.hours << " hours, " << diffResult.minutes << " minutes, " << diffResult.seconds << " seconds" << std::endl;

    return 0;
}
