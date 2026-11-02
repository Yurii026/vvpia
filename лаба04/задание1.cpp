#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int daytime;

	cout << "Введите код времени суток \n";
	cin >> daytime;
	switch(daytime) {
		case 1:
			cout << "Утро";
			break;
		case 2:
			cout << "День";
			break;
		case 3:
			cout << "Вечер";
			break;
		case 4:
			cout << "Ночь";
			break;
		default:
			cout << "Ошибка! Введите число от 1 до 4";
			break;
	}

	return 0;
}
