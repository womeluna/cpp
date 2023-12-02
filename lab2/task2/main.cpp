#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main()
{
	// Записываем введенный номер в переменную n
	string n;
	cout << "Enter SNILS number ";
	cin >> n;
	// Проверяем первые 9 цифр на валидность
	int count = 0;
	bool valid_9 = true;
	for (int i = 1;i <= 8;i++) {
		if (n[i] == n[i - 1]) { count++; }
		else { count = 0; };
		if (count > 2) { valid_9 = false; break; };
	}
	// При валидности первых 9 цифр считаем по ним контрольную сумму и сравниваем ее с данной 
	if (valid_9) {
		string c;
		int sum = 0;
		for (int i = 8; i >= 0; i--) {
			int n_i = stoi(string(1, n[i]));
			sum += ((9 - i) * n_i);
		}
		cout << sum << " total sum\n";
		sum = sum % 101;
		if (sum >= 100 && sum <= 101) {
			c = "00";
		}
		else {
			c = to_string(sum);
		}
		if (c == n.substr(9, 10)) {
			cout << "SNILS is valid";
		}
		else {
			cout << "SNILS is invalid";
		}
	}
	else {
		cout << "SNILS is invalid";
	}
}
