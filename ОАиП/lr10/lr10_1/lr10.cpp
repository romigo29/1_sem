#include <iostream> //��� ������ � ������/������� ������ � ������/ �� �����
#include <stdio.h>
#include <stdlib.h>
#include <ctime> //��� ������ � ������� time

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");  // ����������� �������� ��������
	int n, week, osadki, sum = 0, T[6];
	cout << "������� ���������� ��������������� ���� (��� ������������� ������� ����� ������ ���� ������� 7)" << endl; cin >> n;
	if (n > 0 && n % 7 == 0)
	{
		week = (n / 7);
		cout << "������� ���������� �������, ���������� � ������� 7 ����" << endl;
		for (int i = 0; i < 7; i++)
		{
		cin >> osadki;
			T[i] = osadki;
		}

	}
	else cout << "������� ������������� �����, �������! ";
	return 0;
}
