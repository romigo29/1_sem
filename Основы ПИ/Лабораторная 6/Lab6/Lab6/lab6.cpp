#include <iostream>
#include <Windows.h>
#include "case_lat.h"
#include "case_rus.h"
#include "case_digit.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int k = 0;
    setlocale(LC_CTYPE, "Russian");
        cout << "�������� ������� ������������� ���������" << endl;
        cout << "1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������, ���� ������ ������ ���������� ��������, ����� ����� ��������� �� ������ " << endl;
        cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������, ���� ������ ������ �������� ��������, ����� ����� ��������� �� ������ " << endl;
        cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����, ����� ����� ��������� �� ������ " << endl;
        cout << "4 � ����� �� ���������." << endl;
        cin >> k;
        switch (k)
        {
        case 1:
            Case_lat();
            break;
        case 2:
            Case_rus();
            break;
        case 3:
            Case_digit();
            break;
        case 4:{
            cout << "��������� ���������";
            return 0;
        }
        default:
         cout << "������ ����� ������";
    }
    

        
}

