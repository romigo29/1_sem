#include <iostream>// Подключение библиотеки для работы с вводом/выводом данных на экран
int main() //начало кода программы
{
	setlocale(LC_CTYPE, "Russian");  // Подключение русского алфавита
	using namespace std;// Использование стандартное пространство имен (заменяет оператор std::)
	float a, b, c;
	for (int i = 0; i < 1; i++)
	{ 
		cout << "Введите вещественное число a" << endl; cin >> a;
		cout << "Введите вещественное число b" << endl; cin >> b;
		cout << "Введите вещественное число c" << endl; cin >> c;
	}
	if (a < b)
	{
		if (a < c)
		{
			cout << a << endl;
		}
		else
		{
			cout << c << endl;
		}

	}
	else if (c < b) cout << c << endl;
	else cout << b << endl;

	return 0; // после окончания программы выполняет возврат значения 0
}
