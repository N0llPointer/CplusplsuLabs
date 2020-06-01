#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	for (int i = 40; i < 80; i+=10) {
		for (int j = 1; j <= 10; j++) {
			cout << i + j; // выводится сумма
			cout << " ";
		}

		cout << endl;
	}

	_getch(); //Чтобы консоль сразу не закрылась

	return 0;
}
