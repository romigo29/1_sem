#include <iomanip> // Подключение библиотеки для использования манипуляторов setw и setfill
#include <iostream>  // Подключение библиотеки для работы с вводом/выводом данных на экран
void main() //начало кода программы
{
	setlocale(LC_CTYPE, "Russian");  // Подключение русского алфавита
	using namespace std;  // Использование стандартное пространство имен (заменяет оператор std::)
	char c, probel; probel = ' ';  //ввод переменных c и probel
	cout << "Введите символ "; cin >> c; //ввод переменной "c" с клавиатуры
	//голова
	cout << setw(11) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;  // верхняя сторона квадрата
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl; // установление расстояния между сторонами квадрата и самих сторон
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl; // установление расстояния между сторонами квадрата и самих сторон
	cout << setw(11) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl; // установление расстояния между сторонами квадрата и самих сторон
	// шея
	cout << setw(14) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(14) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	//тело + Руки
	cout << setw(6) << setfill(probel) << probel; // плечи
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(5) << setfill(probel) << probel; //продолжение рук и расстояние между ними и телом 1
	cout << setw(19) << setfill(c) << c << endl;

	cout << setw(4) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c; //продолжение рук и расстояние между ними и телом 2
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	
	cout << setw(3) << setfill(probel) << probel;  //продолжение рук и расстояние между ними и телом 3
	cout << setw(2) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(2) << setfill(probel) << probel;  //продолжение рук и расстояние между ними и телом 3
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(1) << setfill(probel) << probel; //продолжение рук и расстояние между ними и телом 4
	cout << setw(2) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(2) << setfill(c) << c;  //продолжение рук и расстояние между ними и телом 5
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel; //пояс
	cout << setw(15) << setfill(c) << c << endl;


	cout << setw(7) << setfill(probel) << probel; //пояс 2
	cout << setw(15) << setfill(c) << c << endl;

	//ноги
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel; // продолжение
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(5) << setfill(probel) << probel; // ботинки
	cout << setw(6) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;


}
