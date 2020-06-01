#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

void print(int number, double x, double result, int count);

int main() {

	setlocale(LC_ALL, "Rus");

	double e; // точность
	double element; //элемент суммирования
	int counter = 0; // счетчик элементов суммы
	double a = 0; // левая граница
	double b = 0.99; // правая граница
	double h = 0.1; // шаг
	double x = a; // начальное значение x равно левой границе
	double summary = 0; // сумма всех элементов

	cout << "e = ";
	cin >> e;
	cout << endl;

	element = 0;

	printf("%3s %10s %13s %18s\n", "№", "Значение x", "Значение f(x)", "Кол-во слагаемых n"); // форматированный вывод заголовка таблицы

	for (int i = 1; x <= b; i++) {

	do {
		element = pow(x, 2*counter + 1) / (pow(2,2*counter)*(2*i+1));
		summary += element;
		counter++;
	} while (element > e); //если элемент меньше точности, тогда цикл прекращается

	print(i, x, summary, counter);

	counter = 0;
	element = 0;
	summary = 0;

	x += h;

	}
	_getch();

	return 0;
}

void print(int number, double x, double result, int count) { // форматированный вывод элементов таблицы
	printf("%3d %10.2f %13.4f %18d\n", number, x, result, count); //d - целое число, f - дробное число .n - n знаков после запятой %n - минимум n знаков в числе (если не хватает, добавятся пробелы)
}
