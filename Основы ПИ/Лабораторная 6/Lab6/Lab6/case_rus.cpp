#include "case_rus.h"
using namespace std;

void Case_rus()
{
    int diff, n;
    char str;
    cout << "������� ���������� ��������: ";
    cin >> n;
    for (int i = 1; i < (n + 1);) {
        cout << "������� ����� �������� �������� ";
        cin >> str;
        if ('�' <= str && str <= '�')
        {
            diff = tolower(str) - toupper(str);
            cout << diff << endl;
        }
        else
            cout << "�� ����� �� ����� �������� �������� ";

        i++;
    }
}
