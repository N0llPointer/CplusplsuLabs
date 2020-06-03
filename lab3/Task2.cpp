#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const int n = 5;

	int matrix1[n][n] = { {0,0,0,2,1}, {0,0,2,1,2}, {0,2,1,2,0}, {2,1,2,0,0}, {1,2,0,0,0} }; // Инициализация матриц
	int matrix2[n][n] = { {1,0,0,0,1}, {1,1,0,1,1}, {1,1,1,1,1}, {1,1,0,1,1}, {1,0,0,0,1} };

	int count1 = 0; // Счетчик нечетных элементов для матрицы 1
	int count2 = 0; // Счетчик нечетных элементов для матрицы 2

	for (int i = 0; i < n; i++) // Вычисление количества нечетных элементов для обеих матриц
		for (int j = 0; j < n; j++) {
			if (matrix1[i][j] % 2 == 0)
				count1++;
			if (matrix2[i][j] % 2 == 0)
				count2++;
		}

	for (int i = 0; i < n; i++) // Замена нечетных элементов для обеих матриц
		for (int j = 0; j < n; j++) {
			if (matrix1[i][j] % 2 == 0)
				matrix1[i][j] = count1;
			if (matrix2[i][j] % 2 == 0)
				matrix2[i][j] = count1;
		}

	printf("Матрица 1 после изменения:\n");
	 
	for (int i = 0; i < n; i++) { //Вывод измененных матриц
		for (int j = 0; j < n; j++)
			printf("%2d ", matrix1[i][j]);;
		printf("\n");
	}

	printf("\n");

	printf("Матрица 2 после изменения:\n");

	for (int i = 0; i < n; i++) { //Вывод измененных матриц
		for (int j = 0; j < n; j++)
			printf("%2d ", matrix2[i][j]);;
		printf("\n");
	}

	printf("\n");

	int minimal1 = count1; // Минимальный элемент для 1 матрицы. Поначалу равен количеству четных, так как это число точно есть в матрице. 
	int minimal2 = count2; // Минимальный элемент для 1 матрицы. Поначалу равен количеству четных, так как это число точно есть в матрице. 

	for (int i = 0; i < n; i++) // Поиск минимальных элементов.
		for (int j = 0; j < n; j++) {
			if (matrix1[i][j] < minimal1)
				minimal1 = matrix1[i][j];
			if (matrix2[i][j] < minimal2)
				minimal2 = matrix2[i][j];
		}

	printf("Минимальный элемент матрица 1 = %d\n", minimal1);
	printf("Минимальный элемент матрица 2 = %d\n", minimal2);
	printf("\n");

	int composition1 = 1; // Произведение минимальных элементов
	int composition2 = 1;

	for (int i = 0; i < n; i++) // Произведение минимальных элементов
		for (int j = 0; j < n; j++) {
			if (matrix1[i][j] == minimal1)
				composition1 *= minimal1;
			if (matrix2[i][j] == minimal2)
				composition1 *= minimal1;
		}

	printf("Произведение минимальных элементов матрицы 1 = %d\n", composition1);
	printf("Произведение минимальных элементов матрицы 2 = %d\n", composition2);



	_getch();

	return 0;
}
