#include <iostream>
#include "case_lat.h"
using namespace std;
void Case_lat()
{
    {

        int diff, n;
        char str;
        cout << "Введите количество символов: ";
        cin >> n;
        for (int i = 1; i < (n + 1);) {
            cout << "Введите букву латиского алфавита ";
            cin >> str;
            if ((str >= 'A' && str <= 'Z') || (str >= 'А' && str <= 'z'))
            {
                diff = tolower(str) - toupper(str);
                cout << diff << endl;
            }
            else
                cout << "Вы ввели не букву латинского алфавита ";
            i++;
        }
    }
}
