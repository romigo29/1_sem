#include <iostream>
#include "case_digit.h"
#include "nIterations.h"
using namespace std;

void findDigitCode() {
	int nIterations = 0, symbol_code;
	char symbol;
	nIterations = countIterations(nIterations);
	for (int i = 0; i < nIterations; i++) {
		cout << "������� ����� ";
		cin >> symbol;
		if ('0' <= symbol && symbol <= '9') {
			symbol_code = symbol;
			cout << "��� ������� : " << symbol_code << endl;
		}
		else {
			cout << "��� �� �����" << endl;
		}
	}
}
