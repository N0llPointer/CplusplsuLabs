#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	double e;
	double element;
	int i = 1; // счетчик

	cout << "e = "; 
	cin >> e; // вводимая точность 
	cout << endl;

	double summary = 0;

	do {
		element = 1. / ((i + 1) * i);
		summary += element;
		i++;
	} while (element > e); //если элемент меньше точности, тогда цикл прекращается

	cout << "Сумма = " << summary;

	_getch();

	return 0;
}
