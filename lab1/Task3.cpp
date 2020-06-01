#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void printY(double x);

int main() {

	setlocale(LC_ALL, "Rus");

	double a, b, x, h;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "h = ";
	cin >> h;

	cout << "x = ";
	cin >> x;

	while (x >= a && x <= b) {
		cout << "x = " << x << endl;
		
		printY(x);

		x += h;
	}

	_getch();

	return 0;
}

void printY(double x) {
	double y;
	double middleResult = 5. - pow(x, 3);
	if (middleResult >= 0) {
		y = sqrt(middleResult);
		cout << "y = " << y << endl;
	}
	else
		cout << "Функция не определена" << endl;

	cout << endl;
}
