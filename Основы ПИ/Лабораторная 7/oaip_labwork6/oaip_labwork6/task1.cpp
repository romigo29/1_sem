#include <iostream> // ����������� ���������� ��� ������ � ������/������� ������ �� �����
int main() { //������ ���� ���������
	setlocale(LC_CTYPE, "Russian"); // ����������� �������� ��������
	using namespace std;
	int number, number_new = 0, razryad = 1; //���� ���������� number, number_new, razryad, ��� number_new - ����� ��� 3 � 6, razryad - ������ ���� ������ �����
	cout << "������� ����� number = "; cin >> number; cout << endl; // ���� ����� number
	if (number > 0) {
		while (number > 0) {
			if (number % 10 != 3 && number % 10 != 6) {
				number_new += (number % 10) * razryad; //��������� � ������ ����� ����� � ����������� � �������� razryad
				razryad *= 10; // ����������� ������ razryad
			}
			number /= 10; // ������� �� ����� ��������� �����
		}
	}
	if (number < 0) {
		while (number < 0) {
			if (number % 10 != -3 && number % 10 != -6) {
				number_new += (number % 10) * razryad; //��������� � ������ ����� ����� � ����������� � �������� razryad
				razryad *= 10; // ����������� ������ razryad
			}
			number /= 10; // ������� �� ����� ��������� �����
		}
		cout << "����� �����: " << number_new; //����� �����
		return 0;
	}
}
