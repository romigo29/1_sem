#include <iostream>// ����������� ���������� ��� ������ � ������/������� ������ �� �����
int main1() //������ ���� ���������
{
	setlocale(LC_CTYPE, "Russian");  // ����������� �������� ��������
	using namespace std;// ������������� ����������� ������������ ���� (�������� �������� std::)
	float a, b, c;

	cout << "������� ������������ ����� a" << endl; cin >> a;
	while (!isdigit(a)) cout << "������� ������������ ����� a" << endl; cin >> a;
	cout << "������� ������������ ����� b" << endl; cin >> b;
	while (!isdigit(b)) cout << "������� ������������ ����� b" << endl; cin >> b;
	cout << "������� ������������ ����� c" << endl; cin >> c;
	while (!isdigit(c)) cout << "������� ������������ ����� c" << endl; cin >> c;
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
	return 0; // ����� ��������� ��������� ��������� ������� �������� 0
}
