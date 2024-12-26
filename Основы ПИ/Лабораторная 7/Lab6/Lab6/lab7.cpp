#include <iostream>
#include <Windows.h>
#include "case_lat.h"
#include "case_rus.h"
#include "case_digit.h"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "Russian");
    int variant = 0;
    cout << "�������� ������� ������������� ���������" << endl;
    cout << "1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������, ���� ������ ������ ���������� ��������, ����� ����� ��������� �� ������ " << endl;
    cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������, ���� ������ ������ �������� ��������, ����� ����� ��������� �� ������ " << endl;
    cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����, ����� ����� ��������� �� ������ " << endl;
    cout << "4 � ����� �� ���������." << endl;
    cin >> variant;
    switch (variant) {
        case 1: {
            findDifferenceLat();
            break;
        }
        case 2: {
            findDifferenceRus();
            break;
        }
        case 3: {
            findDigitCode();
            break;
        }
        case 4: {
            cout << "��������� ���������";
            return 0;
        }
        default: {
            cout << "������ ����� ������";
        }
    }
}

