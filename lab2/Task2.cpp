#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int k; // количество элементов 
	double x; // переменная x

	cout << "k = ";
	cin >> k;
	cout << "x = ";
	cin >> x;
	cout << endl;

	double summary = 0;

	for (int i = 1; i <= k; i++) {
		summary += pow(x, 2*(i-1))/pow(2 + 4*(i-1),2);
	}

	cout << "Сумма = " << summary;

	_getch();

	return 0;
}
