#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int operation;
	
	cout << "Введите код операции\n";
	cin >> operation;

	switch (operation) {
	case 1:
		cout << "S=πr²";
		break;
	case 2:
		cout << "S=a*b";
		break;
	case 3:
		cout << "S=1/2(a*h)";
		break;
	case 4:
		cout << "S=a²";
		break;
	default:
		cout << "Ошибка! Введите число от 1 до 4";
		break;
	}
	return 0;
}
