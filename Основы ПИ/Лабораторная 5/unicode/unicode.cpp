#include <iostream>
#include <cwctype>
#include <Windows.h>
#include <stdlib.h >
int main()
{
	setlocale(LC_CTYPE, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	using namespace std;
	char str;
	int k;
	puts("Что для вас выполнить? 1 - разница между прописной и строчной буками латиницы ASCII, 2 - разница между прописной и строчной буками кириллицы Windows-1251), 3 - код, соответствующий введенной цифре, 4 - выход из программы"); //задаем вопрос пользователю с выбором варианта
	cin >> k;
	switch (k) //программа запоминает введенное значение
	//далее программа действует в зависимости от введенного значения

	{


	case 1:
	{
		cout << "Введите символ str" << endl; cin >> str;
		if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		{
			int diff = tolower(str) - toupper(str);
			cout << "Разница значений кодов в ASCII буквы в прописном и строчном написании - " << diff << endl;
		}
		else
		{
			cout << "Введен некорректный символ";
		}
		break;
	}
	case 2:
	{
		cout << "Введите символ str" << endl; cin >> str;
		if ((str >= 'А' && str <= 'Я') || (str >= 'а' && str <= 'я'))
		{
			int diff = tolower(str) - toupper(str);
			cout << "Разница значений кодов в Windows-1251 буквы в прописном и строчном написании - " << diff << endl;
		}
		else
		{
			cout << "Введен некорректный символ";
		}
		break;
	}
	case 3:
	{
		cout << "Введите символ str" << endl; cin >> str;
		if (str >= '0' && str <= '9')
			cout << (int)str;
		else
		{
			cout << "Введен некорректный символ";
		}
		break;
	}

	case 4: return(0); break;
	default: puts("Ошибка ввода данных"); break;
	}
	return 0; // после окончания программы выполняет возврат значения 0
}
