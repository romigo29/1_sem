#include <iostream> // ����������� ���������� ��� ������ � ������/������� ������ �� �����
using namespace std; // ������������� ����������� ������������ ����
int main() //������ ���� ���������
{
	setlocale(LC_CTYPE, "Russian"); // ����������� �������� ��������
	int a, n, flag = false, counter = 0; // ���� ������������ ����� a, n, m
	cout << "������� ���������� ����� n: "; cin >> n; // ���� ���-�� �����
	for (int i = 1; i < n + 1; i++) //������ ������ �����
	{
		cout << "������� ����� a" << i << endl; cin >> a;  //���� ���������� a � ����������
		if (a > 0) // ���� ������� �������������, �� ��������� flag �������� "������"
		{
			flag = true;
		}
		if (flag = true && a < 0) // ���� ������� ������������� � ��� ���� ���������� ������� ��� �������������, �� ��������� �������� �������� � �������� �������� flag
		{
			counter += 1;
			flag = false;
		}
	}
	cout << "���������� ���� ����� = " << counter << endl; //����� �������� counter
	return 0;  // ������� �������� 0 �� ��������� ���������
}
