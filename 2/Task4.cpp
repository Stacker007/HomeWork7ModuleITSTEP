/*4.​ Написать функцию, которая в двумерном массиве 
вещественных чисел меняет знак элементов некоторого 
столбца на противоположный (номер столбца передавать 
в качестве параметра). Использовать функцию для 
преобразования матрицы размером 4х5. Выполнить 
два варианта такой функции: 
a) функция, предназначенная для массивов с числом столбцов, равным 5; 
+б) универсальная функция, которую можно использовать при любом числе строк и столбцов.
*/

#include <iostream>
#include <ctime>
#define ROW 30
#define COL 30
using namespace std;
void randArrD(double *ptr, int sizeArr);  
void multiRandArrD(double *ptr, int row, int col);
void printArrD(double *ptr, int sizeArr); 
void multiPrintArrD(double *ptr, int row, int col);
void denying(double *ptr, int row, int col, int iCol);
void denying5COL(double *ptr, int row, int iCol);
int main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(0));
	double multiRowArr[ROW][COL] = {};
	cout << "Исходный линейный массив: " << endl;
	multiRandArrD(multiRowArr[0], ROW, COL);
	multiPrintArrD(multiRowArr[0], ROW, COL);	
	int indexOfcol;

	do {  
		cout << "Введите индекс столбца: ";
		cin >> indexOfcol;
		if (indexOfcol <0 || indexOfcol>(COL - 1)) cout << "Неправильный выбор! ";
	} while (indexOfcol <0 || indexOfcol>(COL - 1));

	denying(multiRowArr[0], ROW, COL, indexOfcol);
	multiPrintArrD(multiRowArr[0], ROW, COL);
	system("pause");
	return 0;
}


void randArrD(double *ptr, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, ptr++)
		*ptr = double(rand() % 5000 - 2500)/100;
}
void multiRandArrD(double *ptr, int row, int col) {
	for (int i = 0; i < row; i++, ptr += col) {
		randArrD(ptr, col);
	}
}

void printArrD(double *ptr, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, ptr++)
		printf("%6.2f ", *ptr);
}
void multiPrintArrD(double *ptr, int row, int col) {
	for (int i = 0; i < row; i++, ptr += col) {
		printArrD(ptr, col);
		cout << endl;
	}
}

void denying(double *ptr, int row, int col, int iCol) {
	ptr = ptr + iCol;
	for (int i = 0; i < row; i++, ptr += col) *ptr = -(*ptr);
}
void denying5COL(double *ptr, int row, int iCol) {
	ptr = ptr + iCol;
	for (int i = 0; i < row; i++, ptr += 5) *ptr = -(*ptr);
}

