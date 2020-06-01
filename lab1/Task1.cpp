#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	int mainNumber = 25; // число, которое будет меняться

	while (mainNumber <= 35) { // пока переменная меньше либо равна 35, цикл будет выполняться.
		cout << mainNumber;
		cout << " ";
		cout << mainNumber + 0.5;
		cout << " ";
		cout << mainNumber - 0.2;
		cout << endl;

		mainNumber++; // увеличение основной переменной на 1
	}

	cout << endl;

	mainNumber = 25; // "обнуление" переменной, чтобы реализовать другой вид цикла

	do {
		cout << mainNumber;
		cout << " ";
		cout << mainNumber + 0.5;
		cout << " ";
		cout << mainNumber - 0.2;
		cout << endl;

		mainNumber++; // увеличение основной переменной на 1
	} while (mainNumber <= 35); // пока переменная меньше либо равна 35, цикл будет выполняться.


	cout << endl;

	for (int i = 25; i <= 35; i++) { //тоже самое, но через for
		cout << i;
		cout << " ";
		cout << i + 0.5;
		cout << " ";
		cout << i - 0.2;
		cout << endl;
	}

	_getch(); //Чтобы консоль сразу не закрылась

	return 0;
}
