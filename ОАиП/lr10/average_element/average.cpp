#include <iostream> //��� ������ � ������/������� ������ � ������/ �� �����
#include <stdio.h>
#include <stdlib.h>
#include <ctime> //��� ������ � �������� time

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");  // ����������� �������� ��������
	srand(time(NULL));  //������������� ����� ����� ������� ��� ������� rand() 
	int A[100], n, before = 0, after = 0, sum = 0, mx = 0; //���� ������� � ��� �������, ����� ��������������� ��������� � �� ������������ �����
	cout << "������� ������ ������� (����� ������ ���� ��������!) " << endl; cin >> n;
	if (n % 2 == 0) cout << "����� ������ ���� ��������! ";
	else {
		for (int i = 0; i < n; i++) //������ ����������� ��������� �������
		{
			A[i] = 1 + rand() % 100;
			cout << A[i] << ", ";
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (A[j] < A[i]) before++;
				if (A[j] < A[i]) after++;
			}
			if (before == after) mx = A[i]; break;
		}

	}
	cout << "������� �������" << mx << endl;
	return 0;  //����������� 0 �� ��������� ���������
}
