#include <iostream>
#include <chrono>
using namespace std;

float getSum(float a, float b) {
    return (a + b) / 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите число a: "; cin >> a;
	cout << "Введите число b: "; cin >> b;
	auto start = chrono::steady_clock::now(); //начало отсчета времени
	cout << "Среднеарифметическое чисел: " << getSum(a, b) << endl;
	auto end = chrono::steady_clock::now(); //конец расчет времени после возвращения значения функции
	chrono::duration<double> duration = end - start;
	cout << "Функция выполнялась: " << duration.count() << " секунд" << std::endl;
	return 0;
}