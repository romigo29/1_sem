#include "case_digit.h"
using namespace std;
void Case_digit()
{
	char str, n;
	int  int_code;
	cout << "Введите количество символов:  ";
	cin >> n;
	for (int i = 1; i < (n + 1); )
	{
		cout << "Введите цифру ";
		cin >> str;
		if ('0' <= str && str <= '9')
		{
			int_code = str;
			cout << "Код символа : " << int_code << endl;
		}
		else cout << "Это не цифра" << endl;
		i++;
	}
}
