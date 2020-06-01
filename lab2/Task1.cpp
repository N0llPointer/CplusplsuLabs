#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int n;

	cout << "n = ";
	cin >> n;
	cout << endl;

	double summary = 0;

	for (int i = 1; i <= n; i++) {
		summary += 1. / pow(i, 2);
	}

	cout << "Сумма = " << summary;

	_getch();

	return 0;
}
