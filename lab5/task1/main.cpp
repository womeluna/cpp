#include <iostream>

using namespace std;

// Функция для сортировки выбором
void selectionSort(int size, int* arr) {
    int min = 0; // Индекс для записи минимального значения
    int buf = 0; // Временная переменная для обмена значениями

    for (int i = 0; i < size; i++) {
        min = i; // Изначально считаем, что текущий элемент - минимальный

        // Внутренний цикл находит реальный индекс минимального значения
        for (int j = i + 1; j < size; j++)
            min = (arr[j] < arr[min]) ? j : min;

        // Если текущий элемент не минимальный, меняем его с минимальным
        if (i != min) {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
}

// Функция для вывода массива на экран
void printArray(int size, int* arr) {
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << '\t';
    cout << endl;
}


// Функция для расчета суммы отрицательных элементов
int sumOfNegatives(int size, int* arr) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }

    return sum;
}

// Функция для расчета суммы положительных элементов
int sumOfPositives(int size, int* arr) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }

    return sum;
}

// Функция для расчета суммы элементов с нечетными индексами
int sumOfOddIndices(int size, int* arr) {
    int sum = 0;

    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
}

// Функция для расчета суммы элементов с четными индексами
int sumOfEvenIndices(int size, int* arr) {
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int size;

    // Ввод размера массива с клавиатуры
    cout << "Enter the size of the array: ";
    cin >> size;

    // Динамическое выделение памяти для массива
    int* a = new int[size];

    // Ввод элементов массива с клавиатуры
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    // Вызов функций
    selectionSort(size, a);
    printArray(size, a);

    // Дополнительные задачи
    cout << "Sum of negative elements: " << sumOfNegatives(size, a) << endl;
    cout << "Sum of positive elements: " << sumOfPositives(size, a) << endl;
    cout << "Sum of elements with odd indices: " << sumOfOddIndices(size, a) << endl;
    cout << "Sum of elements with even indices: " << sumOfEvenIndices(size, a) << endl;

    // Освобождение памяти после использования
    delete[] a;

    return 0;
}
