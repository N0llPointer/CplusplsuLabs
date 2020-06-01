#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

void print(int number, double x, double result, int count);

int main() {

	setlocale(LC_ALL, "Rus");

	double e;
	double element;
	int counter = 0;
	double a = 0;
	double b = 0.99;
	double h = 0.1;
	double x = a;
	double summary = 0;

	cout << "e = ";
	cin >> e;
	cout << endl;

	element = 1;

	printf("%3s %10s %13s %18s\n", "№", "Значение x", "Значение f(x)", "Кол-во слагаемых n");

	for (int i = 1; x <= b; i++) {

	do {
		element = pow(x, 2*counter + 1) / (pow(2,2*counter)*(2*i+1));
		summary += element;
		counter++;
	} while (element > e);

	print(i, x, summary, counter);

	counter = 0;
	element = 0;
	summary = 0;

	x += h;

	}
	_getch();

	return 0;
}

void print(int number, double x, double result, int count) {
	printf("%3d %10.2f %13.4f %18d\n", number, x, result, count);
}
