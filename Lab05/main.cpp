#include <iostream>
#include <cstdlib>
#include "Complex.h"
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");
	double re, im;
	cout << "������� �������������� �����: ";
	cin >> re;
	cout << endl;
	cout << "������� ������ �����: ";
	cin >> im;

	Complex z = Complex(re, im);

	cout << Complex::y(z).Re() << " " << Complex::y(z).Im();
	system("pause");
	return 0;
}