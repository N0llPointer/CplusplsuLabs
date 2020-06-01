#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void function_f(double x);//объявление функции для получения значения функции f(x)

int main() {

	setlocale(LC_ALL, "Rus");//Чтобы русский язык нормально выводился

	double a, b, x, h;//инициализация переменных. a и b - границы, h - шаг

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "h = ";
	cin >> h;

	cout << "x = ";
	cin >> x;
	
	cout << endl;

	while (x >= a && x <= b) {//пока x в заданных границах, выполняется цикл
		cout << "x = " << x << endl;
		
		function_f(x);

		x += h;//x увеличивается на шаг h
	}

	_getch(); //Чтобы консоль сразу не закрылась

	return 0;
}

//Функция для получения значения функции f(x)
void function_f(double x) {
	double y;
	double middleResult = 5. - pow(x, 3); //Промежуточный результат
	if (middleResult >= 0) { //если промежуточный вариант > 0, тогда выводится y
		y = sqrt(middleResult); //вычисление y
		cout << "y = " << y << endl;
	}
	else //иначе сообщение об ошибке
		cout << "Функция не определена" << endl;

	cout << endl;
}
