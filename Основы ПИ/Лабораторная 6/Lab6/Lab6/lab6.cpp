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
        cout << "¬ыберите вариант использовани€ программы" << endl;
        cout << "1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначе вывод сообщени€ об ошибке " << endl;
        cout << "2 Ц определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита, иначе вывод сообщени€ об ошибке " << endl;
        cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщени€ об ошибке " << endl;
        cout << "4 Ц выход из программы." << endl;
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
            cout << "ѕрограмма завершена";
            return 0;
        }
        default:
         cout << "ќшибка ввода данных";
    }
    

        
}

