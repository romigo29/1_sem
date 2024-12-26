#include <iostream>
using namespace std;
//��������� �������
int &returnIndex(float** A, int rows, int cols);
//������� �������
int main()
{
	setlocale(LC_ALL, "Russian");
	int rows, cols, i, j; //���� ������� ����� � �������� �������; ���������� ����������
	cout << "������� ������ ����� � �������: "; cin >> rows;
	cout << "������� ������ ����� � �������: "; cin >> cols;
	//���������� ������ ��� �������� �������
	float** A = new float* [rows];
	for (i = 0; i < rows; i++) {
		A[i] = new float[cols];
	}
	//���������� � ������� ��������� � ����������
	cout << "������� �������� �������: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << "������� (" << i << "," << j << "): "; cin >> A[i][j];
		}
	}
	//����� ������� �� �����
	cout << "�������� �������: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	//����� ���������������� ���������
	cout << "����� ������, ���������� ������������� �������: " << returnIndex(A, rows, cols);
	//������������ ������
	for (i = 0; i < rows; i++) {
		delete[] A[i];
	}
	delete[] A; //������������ ������
	return 0;
}
//������� ��� ���������� �������������� �������� � ��� ������� � ������
int &returnIndex(float** A, int rows, int cols)
{
	int check = 0, index, i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			if (A[i][j] < 0) {
				check++;
				index = i;
			}
			if (check == 1) { //���� � ������ ���� ���� �� 1 ������������� �������, �� ����� �� �����
				break;
			}
		}
		//�������������� �������, ���� ������� ���� �� ���� ������ �� ������������� ���������
		if (check == 1) {
			j = index;
			for (i = 0; i < rows; i++) {
				A[i][j] /= 2; //�������� ���������������� ������� ��������� �����
			}
			break;
		}
	}
	
	//����� ������� �� �����
	cout << "��������������� �������: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	return index; //������� �������� � ������� �������
}
