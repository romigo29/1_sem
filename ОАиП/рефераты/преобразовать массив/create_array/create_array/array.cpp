#include <iostream> //��� ������ � ������/������� ������
using namespace std;  //����������� ������������ ������������ ����

int main() {
    setlocale(LC_CTYPE, "Russian");  //����������� �������� ��������
    int variant, size = 0, i, j, rows = 0, cols = 0; //size - ������ ����������� �������, rows � cols - ������ ����� � �������� ���������� ������� ��������������

    cout << "������� ������ ������ ���������� �������: ";
    cin >> rows;
    cout << "������� ������ ������� ���������� �������: ";
    cin >> cols;
    size = rows * cols;  //���������� ������� ����������� �������
    int* array = new int[size];  //��������� ������������ ������ ��� �������� ����������� ������� 
    int** matrix = new int* [rows];  //��������� ������������ ������ ��� �������� ���������� ������� 
    for (i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    cout << "����� �������� �� ������ ���������? (1 - ������������� ���������� ������ � ����������, 2 - ������������� ���������� ������ � ����������)" << endl;
    cin >> variant;

    switch (variant) {
    case 1: { //���� ������� ������ �������
        cout << "\n������� �������� ������� (������: " << size << ") " << endl;
        for (i = 0; i < size; i++) {
            cout << "������� �" << i << ": ";
            cin >> *(array + i);
        }

        cout << "�������� ����������� �������: ";
        for (i = 0; i < size; i++) {
            cout << *(array + i) << " ";
        }
        
        cout << "\n�������� ������������� ���������� �������: " << endl;
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
    case 2: { //���� ������� ������ �������   
        cout << "\n������� �������� ������� (������: " << size << ")" << endl; //���� ��������� ������� ������������� � ����������
        int k = 0;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                cout << "�" << k<< ".";

                cin >> matrix[i][j];
                array[k] = matrix[i][j];
                k++;
            }
        }

        cout << "�������� ��������� ������: " << endl;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "���������� ���������� ������: ";
        for (i = 0; i < size; i++) {
            cout << array[i] << " ";
        }

        break;
    }
    default: {  //���� ����� ��������, �������� �� 1 � 2
        cout << "������ ����� ������";  
        break;
    }
        
    }
       // ������������ ������������ ������
           delete[] array;
           for (i = 0; i < rows; i++) {
               delete[] matrix[i];
           }
           delete[] matrix;
    return 0;
}
