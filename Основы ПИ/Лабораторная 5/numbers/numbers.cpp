#include <iostream>// ����������� ���������� ��� ������ � ������/������� ������ �� �����
int main() //������ ���� ���������
{
	setlocale(LC_CTYPE, "Russian");  // ����������� �������� ��������
	using namespace std;// ������������� ����������� ������������ ���� (�������� �������� std::)
	float a, b, c;
	for (int i = 0; i < 1; i++)
	{ 
		cout << "������� ������������ ����� a" << endl; cin >> a;
		cout << "������� ������������ ����� b" << endl; cin >> b;
		cout << "������� ������������ ����� c" << endl; cin >> c;
	}
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
	else if (c < b) cout << c << endl;
	else cout << b << endl;

	return 0; // ����� ��������� ��������� ��������� ������� �������� 0
}
