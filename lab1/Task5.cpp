#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double pi(); //объявление функции для получения числа p

int main() {

	setlocale(LC_ALL, "Rus"); //Чтобы русский язык нормально выводился

	int n; //объявление переменных. n - количество элементов
	double b; //сам элемент b

	cout << "n = "; 
	cin >> n; //ввод значение n
	cout << endl;

	b = 4.7; // первый элемент b

	cout << "b1 = " << b << endl;

	//цикл для получения bn
	for (int i = 2; i <= n; i++) {
		b = sin(b) + pi(); //bn = sin(bn-1) + p; код будет работать, так как сначала вычисляется правая половина выражения, потом левая, поэтому в функция синуса передается старое значение b.
		cout << "b1 = " << b << endl;
	}

	_getch(); //Чтобы консоль сразу не закрылась

	return 0;
}

//Функция для получения числа p
double pi() {
	return atan(1) * 4; // тангенс от p/4 = 1. Следовательно, арктангенс от 1 равен p/4. Далее мы домножаем на 4 и получаем само число p
}
