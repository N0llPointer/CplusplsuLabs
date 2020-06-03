#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const int n = 6; //Кол-во строк 
	const int m = 6; //Кол-во столбцов

	int matrix[n][n];

	printf("Исходная матрица:\n");
	for (int i = 0; i < n; i++) { // Заполнение и вывод элементов
		for (int j = 0; j < m; j++) {
			matrix[i][j] = (rand() % 100) - 50; // рандомные целые числа от -50 до 49
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}

	int count = 0;

	for (int i = 0; i < m; i ++) { 
		for (int j = 0; j < n; j++) {
			if (abs(matrix[j][i] % 2) == 1) // Если число нечетное, тогда счетчик увеличивается (abs - для отрицательных чисел)
				count++;
			}
			if(count %2 ==0) // Если нечетное количество, то столбец удаляется
				for (int j = 0; j < n; j++) 
					matrix[j][i] = 0;
			count = 0; // счетчик обнуляется
	}

	printf("\n");

	printf("Измененная матрица:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}

	_getch();

	return 0;
}

