#include <iostream>
#include "float_numbers.h"
using namespace std;
void algoritm()
{
		setlocale(LC_CTYPE, "Russian");
		float a, b, c;
		cout << "������� ������������ ����� a" << endl; cin >> a;
		cout << "������� ������������ ����� b" << endl; cin >> b;
		cout << "������� ������������ ����� c" << endl; cin >> c;
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
