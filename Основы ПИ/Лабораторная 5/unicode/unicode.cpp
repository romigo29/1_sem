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
	puts("��� ��� ��� ���������? 1 - ������� ����� ��������� � �������� ������ �������� ASCII, 2 - ������� ����� ��������� � �������� ������ ��������� Windows-1251), 3 - ���, ��������������� ��������� �����, 4 - ����� �� ���������"); //������ ������ ������������ � ������� ��������
	cin >> k;
	switch (k) //��������� ���������� ��������� ��������
	//����� ��������� ��������� � ����������� �� ���������� ��������

	{


	case 1:
	{
		cout << "������� ������ str" << endl; cin >> str;
		if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		{
			int diff = tolower(str) - toupper(str);
			cout << "������� �������� ����� � ASCII ����� � ��������� � �������� ��������� - " << diff << endl;
		}
		else
		{
			cout << "������ ������������ ������";
		}
		break;
	}
	case 2:
	{
		cout << "������� ������ str" << endl; cin >> str;
		if ((str >= '�' && str <= '�') || (str >= '�' && str <= '�'))
		{
			int diff = tolower(str) - toupper(str);
			cout << "������� �������� ����� � Windows-1251 ����� � ��������� � �������� ��������� - " << diff << endl;
		}
		else
		{
			cout << "������ ������������ ������";
		}
		break;
	}
	case 3:
	{
		cout << "������� ������ str" << endl; cin >> str;
		if (str >= '0' && str <= '9')
			cout << (int)str;
		else
		{
			cout << "������ ������������ ������";
		}
		break;
	}

	case 4: return(0); break;
	default: puts("������ ����� ������"); break;
	}
	return 0; // ����� ��������� ��������� ��������� ������� �������� 0
}
