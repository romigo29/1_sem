#include <iostream> //для работы с вводом/выводом данных с экрана/ на экран
#include <stdio.h>
#include <stdlib.h>
#include <ctime> //для работы с функией time

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");  // Подключение русского алфавита
	int n, week, osadki, sum = 0, T[6];
	cout << "Введите количество рассматриваемых дней (для полноценности расчета число должно быть кратным 7)" << endl; cin >> n;
	if (n > 0 && n % 7 == 0)
	{
		week = (n / 7);
		cout << "Введите количество осадков, выпадавшее в течение 7 дней" << endl;
		for (int i = 0; i < 7; i++)
		{
		cin >> osadki;
			T[i] = osadki;
		}

	}
	else cout << "Введите положительное число, кратное! ";
	return 0;
}
