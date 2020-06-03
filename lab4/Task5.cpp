#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const int n = 80;

	char line[n];
	char symbol;

	cout << "Введите строку: ";
	cin >> line; // Так считывается только первое слово, по-другому у меня не работает
	// чтобы считать всю строку, попробуй использовать gets(line); или getline(cin, line);

	cout << "Введите символ для удвоения: ";
	cin >> symbol;

	for (int i = 0; i < strlen(line); i++) { // strlen - длина строки
		if (line[i] == symbol)
			cout << line[i] << line[i]; // Удвоение символа, если это искомый символ
		else
			cout << line[i]; // Иначе просто вывод символа
	}

	_getch();
	
	return 0;
}
