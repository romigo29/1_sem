#include <iostream> 
using namespace std;

//функция для подсчета запятых и точек в строке
void countCommasDots(char str[], int size) {
	int comma_counter = 0, dot_counter = 0; //инициализация счетчиков
	for (int i = 0; i < size; i++) {
		if (*(str + i) == ',') {  //в случае нахождения запятой в строке увеличить соответствующий счетчик
			comma_counter++;
		}
		if (*(str + i) == '.') {  //в случае нахождения точки в строке увеличить соотвествующий счетчик
			dot_counter++;
		}
	}
	cout << "\nКоличество запятых в строке: " << comma_counter << endl;  //вывод количества запятых в строке
	cout << "Количество точек в строке: " << dot_counter << endl;  //вывод количества точек в строке
}

//основная функция
int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	int size = 0;  //ввод размера строки
	char str[256];  //ввод строки
	cout << "Введите размер строки: "; cin >> size;
	cout << "\nВведите строку: "; cin >> str;

	countCommasDots(str, size);  //подсчет запятых и точек
	return 0;
}
