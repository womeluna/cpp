#include <iostream>
#include <ctime>
#include <string>

using namespace std;
int main() {
    // Объявляем переменную n и инициализируем ее введенным пользователем значением
    int n;
    cout << "Enter number: ";
    cin >> n;
    //Выводим количесвто десяток
    cout << "10 ruble coins - " << n / 10 << endl;
    n %= 10;
    //Выводим количество пятерок
    cout << "5 ruble coins - " << n / 5 << endl;
    n %= 5;
    //Выводим количество двоек
    cout << "2 ruble coins - " << n / 2 << endl;
    n %= 2;
    //Выводим количество единиц
    cout << "1 ruble coins - " << n << endl;
    return 0;
}
