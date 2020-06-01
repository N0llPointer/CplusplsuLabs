#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	double e;
	double element;
	int i = 1;

	cout << "e = ";
	cin >> e;
	cout << endl;

	double summary = 0;

	do {
		element = 1. / ((i + 1) * i);
		summary += element;
		i++;
	} while (element > e);

	cout << "Сумма = " << summary;

	_getch();

	return 0;
}
