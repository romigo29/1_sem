#include <iostream>
#include "case_lat.h"
#include "nIterations.h"
using namespace std;

void findDifferenceLat() {
    int difference, nIterations = 0;
    char symbol;
    nIterations = countIterations(nIterations);
    for (int i = 0; i < nIterations; i++) {
        cout << "������� ����� ��������� �������� ";
        cin >> symbol;
        if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= '�' && symbol <= 'z')) {
            difference = tolower(symbol) - toupper(symbol);
            cout << difference << endl;
        }
        else {
            cout << "�� ����� �� ����� ���������� �������� " << endl;
        }
    }
}
