#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int choise;
	int random;
	int number;

	cout << "Игра «Угадай число»\n";
	cout << "ГЛАВНОЕ МЕНЮ\n1 - Новая игра\n2 - Правила\n3 - Рекорды\n0 - Выход\n";
	cin >> choise;

	switch (choise) {
	
	case 0: 
		cout << "Вы вышли из игры";
		break;
	
	case 1:
		cout << "Выберите уровень сложности:\n1 - Легко\n2 - Средне\n3 - Сложно\n";
		cin >> random;
	
		switch (random) {
		case 1:
			cout << "Вы выбрали легкий уровень, введите число от 1 до 10:\n";
			cin >> number;
			cout << "\nПоздравляем! Вы выиграли!";
			break;

		case 2:
			cout << "Вы выбрали средний уровень, введите число от 1 до 50:\n";
			cin >> number;
			cout << "\nПоздравляем! Вы выиграли!";
			break;

		case 3:
			cout << "Вы выбрали сложный уровень, введите число от 1 до 100:\n";
			cin >> number;
			cout << "\nПоздравляем! Вы выиграли!";
			break;
		}
		break;
	case 2:
		cout << "Правила игры: игрок угадывает число от 1 до 100(согласно уровню сложности)";
		break;
	case 3:
		cout << "Рекорды: на данный момент данные отсутствуют";
	}
	return 0;
}
