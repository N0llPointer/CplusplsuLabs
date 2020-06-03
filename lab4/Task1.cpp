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
	for(int i=0;i<n;i++){ // Заполнение и вывод элементов
		for (int j = 0; j < m; j++) { 
			matrix[i][j] = (rand() % 100) - 50; // рандомные целые числа от -50 до 49
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}

	if (n % 2 == 0) { //Если четное кол-во строк
		for (int i = 1; i < n; i += 2) { //вторая меняется с первой, четвертая с третьей
			for (int j = 0; j < m; j++) {
				int temporary = matrix[i][j];  
				matrix[i][j] = matrix[i - 1][j];
				matrix[i - 1][j] = temporary;
			}
		}
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

