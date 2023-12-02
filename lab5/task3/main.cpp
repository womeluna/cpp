#include <iostream>

using namespace std;

// Функция для поиска элемента с использованием алгоритма транспозиции
int transpositionSearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        // Проверяем, если элемент на левой границе массива равен ключу
        if (arr[left] == key) {
            return left;  // Возвращаем индекс найденного элемента в начале массива
        }
        else if (arr[right] == key) {
            // Если элемент на правой границе равен ключу, производим транспозицию
            std::swap(arr[right], arr[right - 1]);
            return right - 1;  // Возвращаем индекс найденного элемента после транспозиции
        }

        // Увеличиваем левую границу и уменьшаем правую границу
        left++;
        right--;
    }

    return -1;  // Возвращаем -1, если элемент не найден
}

int main() {
    int size;

    // Ввод размера массива с клавиатуры
    cout << "Enter the size of the array: ";
    cin >> size;

    // Динамическое выделение памяти для массива
    int* arr = new int[size];

    // Ввод элементов массива с клавиатуры
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;

    // Вводим ключ с клавиатуры
    std::cout << "Enter the search key: ";
    std::cin >> key;

    // Вызываем функцию поиска с использованием алгоритма транспозиции
    int result = transpositionSearch(arr, size, key);

    // Выводим результат на английском
    if (result != -1) {
        std::cout << "Element " << key << " found at position " << result << std::endl;
    }
    else {
        std::cout << "Element " << key << " not found" << std::endl;
    }

    return 0;
}
