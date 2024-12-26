#include <iostream> //для работы с вводом/выводом данных
using namespace std;  //подключение стандартного пространства имен

int main() {
    setlocale(LC_CTYPE, "Russian");  //подключение русского алфавита
    int variant, size = 0, i, j, rows = 0, cols = 0; //size - размер одномерного массива, rows и cols - размер строк и столбцов двумерного массива соответственно

    cout << "Введите размер строки двумерного массива: ";
    cin >> rows;
    cout << "Введите размер столбца двумерного массива: ";
    cin >> cols;
    size = rows * cols;  //определние размера одномерного массива
    int* array = new int[size];  //выделение динамической памяти для создания одномерного массива 
    int** matrix = new int* [rows];  //выделение динамической памяти для создания двумерного массива 
    for (i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    cout << "Какую операцию вы хотите совершить? (1 - преобразовать одномерный массив в двухмерный, 2 - преобразовать двухмерный массив в одномерный)" << endl;
    cin >> variant;

    switch (variant) {
    case 1: { //если выбрали первый вариант
        cout << "\nВведите элементы массива (Размер: " << size << ") " << endl;
        for (i = 0; i < size; i++) {
            cout << "элемент №" << i << ": ";
            cin >> *(array + i);
        }

        cout << "Элементы одномерного массива: ";
        for (i = 0; i < size; i++) {
            cout << *(array + i) << " ";
        }
        
        cout << "\nЭлементы образованного двумерного массива: " << endl;
        int k = 0;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                matrix[i][j] = *(array + k);
                cout << matrix[i][j] << "\t";
                k++;
            }
            cout << "\n";
        }
        break;
    }
    case 2: { //елси выбрали второй вариант   
        cout << "\nВведите элементы массива (Размер: " << size << ")" << endl; //ввод элементов массива пользователем с клавиатуры
        int k = 0;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                cout << "№" << k<< ".";

                cin >> matrix[i][j];
                array[k] = matrix[i][j];
                k++;
            }
        }

        cout << "Исходный двумерный массив: " << endl;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "Полученный одномерный массив: ";
        for (i = 0; i < size; i++) {
            cout << array[i] << " ";
        }

        break;
    }
    default: {  //если ввели значение, отличное от 1 и 2
        cout << "Ошибка ввода данных";  
        break;
    }
        
    }
       // Освобождение динамической памяти
           delete[] array;
           for (i = 0; i < rows; i++) {
               delete[] matrix[i];
           }
           delete[] matrix;
    return 0;
}
