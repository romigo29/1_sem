#include <iostream>
#include "case_lat.h"
using namespace std;
void Case_lat()
{
    {

        int diff, n;
        char str;
        cout << "������� ���������� ��������: ";
        cin >> n;
        for (int i = 1; i < (n + 1);) {
            cout << "������� ����� ��������� �������� ";
            cin >> str;
            if ((str >= 'A' && str <= 'Z') || (str >= '�' && str <= 'z'))
            {
                diff = tolower(str) - toupper(str);
                cout << diff << endl;
            }
            else
                cout << "�� ����� �� ����� ���������� �������� ";
            i++;
        }
    }
}
