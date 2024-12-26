#include <iostream>
#include <ctime> //дл€ работы с функцией time
#include <algorithm> //жд€ сортировки массивов
using namespace std;

//фукнци€ дл€ заполнени€ массива A случайными числами и его вывода
void inputArrays(int* pA, int* pB) {
    for (int i = 0; i < 10; i++) {
        *(pA + i) = rand() % 20;  //заполнение массива A случайными числами от 0 до 20
    }
    sort(pA, pA + 10, greater<>());  //сортировка элементов по убыванию массива A

    cout << "Ёлементы массива A: "; //вывод массива A
    for (int i = 0; i < 10; i++) {
        cout << *(pA + i) << ", ";
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        *(pB + i) = rand() % 20;  //заполнение массива B случайными числами от 0 до 20
    }
    sort(pB, pB + 10, greater<>()); //сортировка элементов по убыванию массива B

    cout << "Ёлементы массива B: ";  //вывод массива B
    for (int i = 0; i < 10; i++) {
        cout << *(pB + i) << ", ";
    }
    cout << endl;
    
}

//функци€, провер€ющие вхождение максмального элемента массива A в массив B
void checkMax(int* pA, int* pB, int maxA) {
    for (int i = 0; i < 10; i++) {
        if (*(pA + i) != *(pB + i)) {
            cout << "ћаксильмальное число массива A, не вход€щее в массив B: " << *(pA + i); break;
        }
    }
  }

int main() {
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));  //устанавливает новую точку отсчета дл€ функции rand() 

    int A[10], B[10], maxA = -1, result;   //ввод массивов, их размеров
    
    inputArrays(A, B); //заполнение и вывод массивов

    checkMax(A, B, maxA);  //проверка элементов массивов
    return 0;
}
