#include <iostream> 
using namespace std;

//������� ��� �������� ������� � ����� � ������
void countCommasDots(char str[], int size) {
	int comma_counter = 0, dot_counter = 0; //������������� ���������
	for (int i = 0; i < size; i++) {
		if (*(str + i) == ',') {  //� ������ ���������� ������� � ������ ��������� ��������������� �������
			comma_counter++;
		}
		if (*(str + i) == '.') {  //� ������ ���������� ����� � ������ ��������� �������������� �������
			dot_counter++;
		}
	}
	cout << "\n���������� ������� � ������: " << comma_counter << endl;  //����� ���������� ������� � ������
	cout << "���������� ����� � ������: " << dot_counter << endl;  //����� ���������� ����� � ������
}

//�������� �������
int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	int size = 0;  //���� ������� ������
	char str[256];  //���� ������
	cout << "������� ������ ������: "; cin >> size;
	cout << "\n������� ������: "; cin >> str;

	countCommasDots(str, size);  //������� ������� � �����
	return 0;
}
