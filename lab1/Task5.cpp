#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double pi();

int main() {

	setlocale(LC_ALL, "Rus");

	int n;
	double b;

	cout << "n = ";
	cin >> n;
	cout << endl;

	b = 4.7;

	cout << "b1 = " << b << endl;

	for (int i = 2; i <= n; i++) {
		b = sin(b) + pi();
		cout << "b1 = " << b << endl;
	}

	_getch();

	return 0;
}

double pi() {
	return atan(1) * 4; 
}
