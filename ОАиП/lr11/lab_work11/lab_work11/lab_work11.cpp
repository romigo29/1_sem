#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int A, A_copy, mask, maskA;  //���� ����� �, ��������������� ���������� �_copy � ����� ��� ����� A
	int n, p;  //���� ����� ���������� ����� � ������� ������ ���������
	cout << "������� ����� �: ";
	cin >> A;
	A_copy = A;
	mask = 1 << 15;  //����������� ����� ��� ������ ���������������� ����� �
	cout << "�������� ������������� ����� �: ";
	for (int i = 1; i <= 16; i++) {  //���������� � � �������� �������
		putchar(mask & A ? '1' : '0');
		if (i % 4 == 0) {  //������� ������� ����� ������� 4-��� ������� ����� A
			putchar(' ');
		}
		A <<= 1;  //����� ����� �_copy �� 1 ������ ��������
	}

	cout << "\n� ����� ������� �������� �������� ����?: ";
	cin >> p;
	cout << "������� ����� ��������?: ";
	cin >> n;
	maskA = ~((1 << n) - 1 << 16 - p);  //������� ����� ��� ��������� �����
	A_copy = A_copy & maskA;  //���������� ����� � ���������� �_copy
	for (int i = 1; i <= 16; i++) {  //����� ���������� �� �����
		putchar(mask & A_copy ? '1' : '0');
		if (i % 4 == 0) {  //������� ������� ����� ������� 4-��� ������� ����� A
			putchar(' ');
		}
		A_copy <<= 1;  //����� ����� �_copy �� 1 ������ ��������
	}
}
