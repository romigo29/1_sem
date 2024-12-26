#include <iostream>
#include <ctime> //��� ������ � �������� time
#include <algorithm> //��� ���������� ��������
using namespace std;

//������� ��� ���������� ������� A ���������� ������� � ��� ������
void inputArrays(int* pA, int* pB) {
    for (int i = 0; i < 10; i++) {
        *(pA + i) = rand() % 20;  //���������� ������� A ���������� ������� �� 0 �� 20
    }
    sort(pA, pA + 10, greater<>());  //���������� ��������� �� �������� ������� A

    cout << "�������� ������� A: "; //����� ������� A
    for (int i = 0; i < 10; i++) {
        cout << *(pA + i) << ", ";
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        *(pB + i) = rand() % 20;  //���������� ������� B ���������� ������� �� 0 �� 20
    }
    sort(pB, pB + 10, greater<>()); //���������� ��������� �� �������� ������� B

    cout << "�������� ������� B: ";  //����� ������� B
    for (int i = 0; i < 10; i++) {
        cout << *(pB + i) << ", ";
    }
    cout << endl;
    
}

//�������, ����������� ��������� ������������ �������� ������� A � ������ B
void checkMax(int* pA, int* pB, int maxA) {
    for (int i = 0; i < 10; i++) {
        if (*(pA + i) != *(pB + i)) {
            cout << "�������������� ����� ������� A, �� �������� � ������ B: " << *(pA + i); break;
        }
    }
  }

int main() {
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));  //������������� ����� ����� ������� ��� ������� rand() 

    int A[10], B[10], maxA = -1, result;   //���� ��������, �� ��������
    
    inputArrays(A, B); //���������� � ����� ��������

    checkMax(A, B, maxA);  //�������� ��������� ��������
    return 0;
}
