#include <iostream> //для работы с вводом/выводом данных с экрана/ на экран
#include <stdio.h>
#include <stdlib.h>
#include <ctime> //для работы с функцией time

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");  // Подключение русского алфавита
	srand(time(NULL));  //устанавливает новую точку отсчета для функции rand() 
	int A[100], n, before = 0, after = 0, sum = 0, mx = 0; //ввод массива и его размера, суммы неповторяющихся элементов и их максимальная сумма
	cout << "Введите размер массива (число должно быть нечетным!) " << endl; cin >> n;
	if (n % 2 == 0) cout << "Число должно быть нечетным! ";
	else {
		for (int i = 0; i < n; i++) //массив заполняется случайнми числами
		{
			A[i] = 1 + rand() % 100;
			cout << A[i] << ", ";
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (A[j] < A[i]) before++;
				if (A[j] < A[i]) after++;
			}
			if (before == after) mx = A[i]; break;
		}

	}
	cout << "Средний элемент" << mx << endl;
	return 0;  //возвращение 0 по окончанию программы
}
