#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const int n = 6; //Кол-во строк 
	int x;

	int matrix[n][n];
	int array[n];

	printf("x = ");
	scanf_s("%d", &x); // Если не работает, поменяй на scanf

	printf("Исходная матрица:\n");
	for(int i=0;i<n;i++){ // Заполнение и вывод элементов
		for (int j = 0; j < n; j++) { 
			matrix[i][j] = (rand() % 100) - 50; // рандомные целые числа от -50 до 49
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) // Инициализация значений массива результатов
		array[i] = 0;

	for (int i = 0; i < n; i ++) { // Перебор всех значений матрицы и проверка, есть ли среди них больше x 
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] > x) // Для каждой строчки свое значение в массиве результатов
				array[i]++;
		}
	}

	printf("\n");

	printf("Массив результатов:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}

	_getch();

	return 0;
}

