#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double function_f(double x); //объявление функции для получения числа значение f(x)

int main() {

	setlocale(LC_ALL, "Rus");//Чтобы русский язык нормально выводился

	double a, b, x, h; //инициализация переменных. a и b - границы, h - шаг
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

	while (x >= a && x <= b) { //пока x в заданных границах, выполняется цикл
		cout << "x = " << x << endl;

		y = function_f(x);

		cout << "y = " << y << endl;

		cout << endl;

		x += h; //x увеличивается на шаг h
	}

	_getch(); //Чтобы консоль сразу не закрылась

	return 0;
}

//Функция для получения f(x)
double function_f(double x) {
	double y;
	if (abs(x) <= 0.1)  //если |x| <= 0.1
		y = pow(x, 3) - 0.1; // pow - операция возведения в степень. Первый аргумент - основание, второй - показатель.
	else if (abs(x) <= 0.2) //если |x| <= 0.2
		y = 0.2 * x - 0.1;
	else //если |x| > 0.2
		y = pow(x, 3) + 0.1; 
	
	return y;
}
