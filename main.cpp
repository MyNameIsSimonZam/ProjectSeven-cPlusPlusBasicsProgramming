#include <iostream>

void task11();
void task12();
void task13();
void task14();
void task15();
void task21();
void task22();
void task23();

void pW1();
void pW2();
void pW3();
void pW4();
void pW5();
void pW6();
void pW7();
void pW8();


int main() {
	int choice;
	std::cout << "Choose a task to run:\n";
	std::cout << "1. Задача 1. Кукушка (цикл for).\n";
	std::cout << "2. Задача 2. Сумма чисел (цикл for).\n";
	std::cout << "3. Задача 3. Таблица умножения.\n";
	std::cout << "4. Задача 4. Сумма нечётных.\n";
	std::cout << "5. Задача 5. Начальник (цикл for).\n";
	std::cout << "6. Задача 1. Пароль (цикл for).\n";
	std::cout << "7. Задача 2. Кадастровые проблемы (цикл for).\n";
	std::cout << "8. Задача 3. Крепкий орешек.\n";
	std::cout << "Or choose the number of the practical work to run:\n";
	std::cout << "9. Задание 1. Запасы продовольствия.\n";
	std::cout << "10. Задание 2. Кофемашина.\n";
	std::cout << "11. Задание 3. Красный Марс.\n";
	std::cout << "12. Задание 4. Рамка.\n";
	std::cout << "13. Задание 5. Координатные оси.\n";
	std::cout << "14. Задание 6. Важные объявления.\n";
	std::cout << "15. Задание 7. Биолаборатория*.\n";
	std::cout << "16. Задание 8. Ёлочка*.\n";
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	switch (choice) {
	case 1:
		task11();
		break;
	case 2:
		task12();
		break;
	case 3:
		task13();
		break;
	case 4:
		task14();
		break;
	case 5:
		task15();
		break;
	case 6:
		task21();
		break;
	case 7:
		task22();
		break;
	case 8:
		task23();
		break;
	case 9:
		pW1();
		break;
	case 10:
		pW2();
		break;
	case 11:
		pW3();
		break;
	case 12:
		pW4();
		break;
	case 13:
		pW5();
		break;
	case 14:
		pW6();
		break;
	case 15:
		pW7();
		break;
	case 16:
		pW8();
		break;
	default:
		std::cout << "Invalid choice. Exiting...\n";
	}
	return 0;
}