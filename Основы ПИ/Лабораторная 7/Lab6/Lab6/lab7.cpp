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
    cout << "¬ыберите вариант использовани€ программы" << endl;
    cout << "1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначе вывод сообщени€ об ошибке " << endl;
    cout << "2 Ц определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита, иначе вывод сообщени€ об ошибке " << endl;
    cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщени€ об ошибке " << endl;
    cout << "4 Ц выход из программы." << endl;
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
            cout << "ѕрограмма завершена";
            return 0;
        }
        default: {
            cout << "ќшибка ввода данных";
        }
    }
}

