#include <iostream> //��� ������ � ������/������� ������
#include <ctime>  //��� ������ � �������� time
using namespace std;  //����������� ������������ ������������ ����

int main() {
	setlocale(LC_CTYPE, "Russian");  //����������� �������� ��������
	srand(time(NULL));  //������������� ����� ����� ������� ��� ������� rand() 
	int variant;

	cout << "����������� � ���� '������� ����� �� 1 �� 100!'\n" << "�� ������ � ��� �������? (1 - ��, 2 - ���)" << endl; cin >> variant; //
	switch (variant) {
	case 1: {  //���� �������� �������
		int number;
		number = 1 + rand() % 100;  //���������� number ������������� �������� � ����������� �� �������� �������
		int attempts = 0, guess = 0;  //8.	������������� ���������: attempts = 1 (����� ������� �����), guess = 0 (�����, �������� ������������� � ����������)
		cout << "����� ��������. ";
		do {
			attempts++;
			cout << "��� �������: "; cin >> guess;  //���� ����� � ����������
			if (guess < number) {   //���� ��������� ����� ������ �����������
				cout << "�������. ����� ������ ���������� \n";
			}
			if (guess > number) {  //���� ��������� ����� ������ �����������
				cout << "�������. ����� ������ ����������. \n";
			}
			if (guess == number) {  //���� �� ��������� ����� ����� �����������
				cout << "����������! �� �������� ����� (" << number << ")! " << "����� �������: " << attempts;
				break;
			}
		} while (guess != number);
		break;
		}
	case 2: {  //���� �� �������� �������
		cout << "����� ����! �������, � ��������� ��� �� �����������.";
		break;
		}
	default: {  //���� ����� ��������, �������� �� 1 � 2
		cout << "������ ����� ������";
		break;
		}
	}

	return 0;
}
