#include <iostream>  // ����������� ���������� ��� ������ � ������/������� ������ �� �����
using namespace std;  
double f(double x) //���������� �������
{
	return sin(x) + 1;
}

int main()  //������ ���� ���������
{
	setlocale(LC_ALL, "RUS");  // ����������� �������� ��������
	double a = 1, b = 3, const n = 200;  //���� ���������� a, b, n
	double h = (b - a) / n, x = a, s = 0;  //���� ���������� h, x, s
	while (x <= b - h)  //����� ��������
	{
		s += h * (f(x) + f(x - h)) / 2;
		x += h;
	}
	cout << "������� ����� ����� ��������: " << s << endl;   //����� ������� �� ������ ��������
	h = (b - a) / (2 * n), x = a + 2 * h; double s1 = 0, s2 = 0; int i = 1;  //����� ��������
	while (i < n) {
		s2 += f(x); x += h; s1 += f(x); x += h; i++;
	}
	s = (h / 3) * (f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));
	cout << "������� ����� ����� �������: " << s << endl;  //����� ������� �� ������ �������
	return 0;  //����������� �������� 0 �� ��������� ���������
}
