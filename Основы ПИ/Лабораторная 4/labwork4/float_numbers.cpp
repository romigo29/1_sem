#include <iostream>
#include "float_numbers.h"
using namespace std;
void algoritm()
{
		setlocale(LC_CTYPE, "Russian");
		float a, b, c;
		cout << "Введите вещественное число a" << endl; cin >> a;
		cout << "Введите вещественное число b" << endl; cin >> b;
		cout << "Введите вещественное число c" << endl; cin >> c;
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
		else if (c < b)
		{
			cout << c << endl;
		}
		else {
			cout << b << endl;
		}
}
