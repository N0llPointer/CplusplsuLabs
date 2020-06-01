#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int n;
	int x;
	int summary = 0;

	cout << "n = ";
	cin >> n;

	cout << "x = ";
	cin >> x;

	int* array = new int[n];

	cout << endl;
	cout << "array = {";
	for (int i = 0; i < n; i++) {   // наполнение массива рандомными числами от -50 до 49
		array[i] = (rand() % 100) - 50; 
		cout << " " << array[i];  // вывод элементов массива
	}
	cout << "}" << endl;
	
	int minPositiveNumber = 50; // минимальное положительное число в массиве

	for (int i = 1; i < n; i++) {
		if (array[i] > x && (array[i] % 5) == 0) // если число больше заданного и кратно 5, тогда суммируется
			summary += array[i];
		if (array[i] > 0 && array[i] < minPositiveNumber) // если элемент положительный и меньше минимального положительного, тогда этот элемент становится минимальным положительным
			minPositiveNumber = array[i];
	}

	cout << "Минимальное положительное число = " << minPositiveNumber << endl;
	cout << "Сумма элементов массива, кратных 5 и больших, чем " << x << " = " << summary;

	_getch();

	return 0;
}
