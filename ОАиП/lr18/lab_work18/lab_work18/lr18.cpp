#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//������� �������
int main() {
    setlocale(LC_ALL, "Russian");
    FILE* f, * g; //�������� ��������� � ��������� ������
    errno_t errf, errg; //�������� ����������, ������������ ������ �������� �����
    //�������� ������ � ������ ������
    errf = fopen_s(&f, "f.txt", "r");
    if (errf != 0 || f == NULL) { //���� �� ������� ������� ����
        printf("�� ������� ������� ���� � �������� �������.\n"); //�� ������� ��������������� ���������
        return -1;
    }

    int i, unique_counter = 0, number; //���������� ���������, ������� ��������������� �����, ����� �� �����
    int unique_numbers[100]; //�������� ������� ��� �������� ��������������� �����

    while (fscanf_s(f, "%d", &number) != EOF) {  //���� �� ��������c� ����
        int isDublicate = 0; //������, ������������, ���� �� � ������� ��������� ����������
        for (int i = 0; i < unique_counter; i++) {  //�������� ��������� ���������� �����
            if (unique_numbers[i] == number) {   //���� ������� ��������� ���������
                isDublicate = 1; //�� ���������� ������ �������� ������
                break;  //����� �� ��������
            }
        }
        if (!isDublicate) {  //�������� ���������� ����� � ������
            unique_numbers[unique_counter] = number;
            unique_counter++;
        }
    }
    //�������� ������� ����� g
    errg = fopen_s(&g, "g.txt", "w"); //�������� ������� ����� ��� ������ ������  
    if (errg!= 0 || g == NULL) {  //���� �� ������� ������� ����
        printf("�� ������� ������� ���� ��� ������.\n");  //�� ������� ��������������� ���������
        fclose(f);
        return -1;
    }
    for (int i = 0; i < unique_counter; i++) {  //������ ���������� ��������� � ���� g
        fprintf(g, "%d ", unique_numbers[i]);
    }

    //�������� ������
    fclose(g);
    //����� ��������� �� �������� ������ ��������� � ����
    printf("��������������� �������� ��������� � ���� g.txt\n");
    return 0;
}
