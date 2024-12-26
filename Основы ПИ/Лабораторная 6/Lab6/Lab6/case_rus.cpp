#include "case_rus.h"
using namespace std;

void Case_rus()
{
    int diff, n;
    char str;
    cout << "Введите количество символов: ";
    cin >> n;
    for (int i = 1; i < (n + 1);) {
        cout << "Введите букву русского алфавита ";
        cin >> str;
        if ('А' <= str && str <= 'я')
        {
            diff = tolower(str) - toupper(str);
            cout << diff << endl;
        }
        else
            cout << "Вы ввели не букву русского алфавита ";

        i++;
    }
}
