#include <iomanip> // ����������� ���������� ��� ������������� ������������� setw � setfill
#include <iostream>  // ����������� ���������� ��� ������ � ������/������� ������ �� �����
void main() //������ ���� ���������
{
	setlocale(LC_CTYPE, "Russian");  // ����������� �������� ��������
	using namespace std;  // ������������� ����������� ������������ ���� (�������� �������� std::)
	char c, probel; probel = ' ';  //���� ���������� c � probel
	cout << "������� ������ "; cin >> c; //���� ���������� "c" � ����������
	//������
	cout << setw(11) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;  // ������� ������� ��������
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl; // ������������ ���������� ����� ��������� �������� � ����� ������
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl; // ������������ ���������� ����� ��������� �������� � ����� ������
	cout << setw(11) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl; // ������������ ���������� ����� ��������� �������� � ����� ������
	// ���
	cout << setw(14) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(14) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	//���� + ����
	cout << setw(6) << setfill(probel) << probel; // �����
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(5) << setfill(probel) << probel; //����������� ��� � ���������� ����� ���� � ����� 1
	cout << setw(19) << setfill(c) << c << endl;

	cout << setw(4) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c; //����������� ��� � ���������� ����� ���� � ����� 2
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	
	cout << setw(3) << setfill(probel) << probel;  //����������� ��� � ���������� ����� ���� � ����� 3
	cout << setw(2) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(2) << setfill(probel) << probel;  //����������� ��� � ���������� ����� ���� � ����� 3
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(1) << setfill(probel) << probel; //����������� ��� � ���������� ����� ���� � ����� 4
	cout << setw(2) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(2) << setfill(c) << c;  //����������� ��� � ���������� ����� ���� � ����� 5
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel; //����
	cout << setw(15) << setfill(c) << c << endl;


	cout << setw(7) << setfill(probel) << probel; //���� 2
	cout << setw(15) << setfill(c) << c << endl;

	//����
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel; // �����������
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	cout << setw(5) << setfill(probel) << probel; // �������
	cout << setw(6) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;


}
