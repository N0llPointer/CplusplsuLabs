#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double function_f(double x);

int main() {

	setlocale(LC_ALL, "Rus");

	double a, b, x, h;
	double y;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "h = ";
	cin >> h;

	cout << "x = ";
	cin >> x;

	cout << endl;

	while (x >= a && x <= b) {
		cout << "x = " << x << endl;

		y = function_f(x);

		cout << "y = " << y << endl;

		cout << endl;

		x += h;
	}

	_getch();

	return 0;
}

double function_f(double x) {
	double y;
	if (abs(x) <= 0.1) 
		y = pow(x, 3) - 0.1;
	else if (abs(x) <= 0.2) 
		y = 0.2 * x - 0.1;
	else 
		y = pow(x, 3) + 0.1;
	
	return y;
}
