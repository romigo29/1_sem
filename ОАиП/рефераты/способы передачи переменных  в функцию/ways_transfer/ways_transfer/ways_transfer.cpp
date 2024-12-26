#include <iostream>
#include <chrono>
using namespace std;

float getSum(float a, float b) {
    return (a + b) / 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "������� ����� a: "; cin >> a;
	cout << "������� ����� b: "; cin >> b;
	auto start = chrono::steady_clock::now(); //������ ������� �������
	cout << "�������������������� �����: " << getSum(a, b) << endl;
	auto end = chrono::steady_clock::now(); //����� ������ ������� ����� ����������� �������� �������
	chrono::duration<double> duration = end - start;
	cout << "������� �����������: " << duration.count() << " ������" << std::endl;
	return 0;
}