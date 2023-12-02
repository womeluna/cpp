#include <iostream>

// Функция max_vect создает массив из больших элементов, стоящих на соответствующих местах в исходных массивах arr1 и arr2.
int* max_vect(int size, const int* arr1, const int* arr2) {
    // Выделяем память под новый массив размером size.
    int* result = new int[size];

    // Проходим по всем элементам массивов arr1 и arr2.
    for (int i = 0; i < size; i++) {
        // Заполняем result максимальным значением из arr1[i] и arr2[i].
        result[i] = (arr1[i] > arr2[i]) ? arr1[i] : arr2[i];
    }

    // Возвращаем указатель на новый массив.
    return result;
}

int main() {
    // Исходные массивы a и b.
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
    int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };

    // Количество элементов в массиве (размер массива).
    int kc = sizeof(a) / sizeof(a[0]);

    // Указатель на результирующий массив.
    int* c;

    // Вызываем функцию max_vect для создания массива.
    c = max_vect(kc, a, b);

    // Выводим результат.
    for (int i = 0; i < kc; i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;

    // Освобождаем память, выделенную под результирующий массив.
    delete[] c;

    return 0;
}
