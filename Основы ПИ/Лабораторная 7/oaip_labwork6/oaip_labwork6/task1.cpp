#include <iostream> // Подключение библиотеки для работы с вводом/выводом данных на экран
int main() { //начало кода программы
	setlocale(LC_CTYPE, "Russian"); // Подключение русского алфавита
	using namespace std;
	int number, number_new = 0, razryad = 1; //ввод переменных number, number_new, razryad, где number_new - число без 3 и 6, razryad - разряд цифр нового числа
	cout << "Введите число number = "; cin >> number; cout << endl; // ввод числа number
	if (number > 0) {
		while (number > 0) {
			if (number % 10 != 3 && number % 10 != 6) {
				number_new += (number % 10) * razryad; //добавляем к новому числу цифру в соответсвии с разрядом razryad
				razryad *= 10; // увеличиваем разряд razryad
			}
			number /= 10; // убираем из числа последнюю цифру
		}
	}
	if (number < 0) {
		while (number < 0) {
			if (number % 10 != -3 && number % 10 != -6) {
				number_new += (number % 10) * razryad; //добавляем к новому числу цифру в соответсвии с разрядом razryad
				razryad *= 10; // увеличиваем разряд razryad
			}
			number /= 10; // убираем из числа последнюю цифру
		}
		cout << "Новое число: " << number_new; //вывод числа
		return 0;
	}
}
