#include <iostream>
using namespace std;
//прототипы функции
int &returnIndex(float** A, int rows, int cols);
//главная функция
int main()
{
	setlocale(LC_ALL, "Russian");
	int rows, cols, i, j; //ввод размера строк и столбцов матрицы; переменных итераторов
	cout << "Введите размер строк в матрице: "; cin >> rows;
	cout << "Введите размер строк в матрице: "; cin >> cols;
	//выеделение памяти для создания матрицы
	float** A = new float* [rows];
	for (i = 0; i < rows; i++) {
		A[i] = new float[cols];
	}
	//добавление в матрицу элементов с клавиатуры
	cout << "Введите элементы матрицы: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << "Элемент (" << i << "," << j << "): "; cin >> A[i][j];
		}
	}
	//вывод матрицы на экран
	cout << "Исходная матрица: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	//вывод соответствующего сообщения
	cout << "Номер строки, содержащий отрицательный элемент: " << returnIndex(A, rows, cols);
	//освобождение памяти
	for (i = 0; i < rows; i++) {
		delete[] A[i];
	}
	delete[] A; //освобождение памяти
	return 0;
}
//функция для нахождения отрицательного элемента и его индекса в строке
int &returnIndex(float** A, int rows, int cols)
{
	int check = 0, index, i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			if (A[i][j] < 0) {
				check++;
				index = i;
			}
			if (check == 1) { //если в строке есть хотя бы 1 отрицательный элемент, то выйти из цикла
				break;
			}
		}
		//преобразование матрицы, если нашлась хотя бы одна строка из отрицательных элементов
		if (check == 1) {
			j = index;
			for (i = 0; i < rows; i++) {
				A[i][j] /= 2; //элементы соответствующего столбца уменьшить вдвое
			}
			break;
		}
	}
	
	//вывод матрицы на экран
	cout << "Преобразованная матрица: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	return index; //вернуть значение в главную функцию
}
