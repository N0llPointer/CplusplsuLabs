#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	bool b1 = "кино" < "кино";
	bool b2 = "кино" == "кино";
	bool b3 = "кино" > "кино";


	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	_getch();
	
	return 0;
}
