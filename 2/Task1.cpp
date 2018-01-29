/*1.​ Описать функцию определения максимального элемента 
в одномерном массиве. С помощью этой функции найти 
максимум в каждой строке двумерного массива и вывести 
эти максимумы на консоль. Также с помощью этой функции 
найти максимальный элемент во всем двумерном массиве.*/

#include <iostream>
#include <ctime>
#define SIZE 5
#define ROW 5
#define COL 5
using namespace std;
void randArr(int *ptr, int sizeArr);
void multiRandArr(int *ptr, int row, int col);
void printArr(int a[], int sizeArr);
void multiPrintArr(int *ptr, int row, int col);
int maxOfArrStr(int *strPtr, int size);//Указатель на 0-й элемент строки
int main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int oneRowArr[SIZE] = {};
	int multiRowArr[ROW][COL] = {};
	int max;
	int *tmp;
	cout << "Исходный линейный массив: " << endl;
	randArr(oneRowArr, SIZE);
	printArr(oneRowArr, SIZE);
	tmp = oneRowArr;
	max = maxOfArrStr(tmp, SIZE);
	cout << "Максимальный элемнет массива: " << max;
	cout << endl;
	cout << endl;
	cout << "Исходный двумерный массив: " << endl;
	multiRandArr(multiRowArr[0], ROW, COL);
	multiPrintArr(multiRowArr[0], ROW, COL);	
	cout << "Максимальный элемнет строки: " << endl;

	for (int i = 0; i < ROW; i++) {
		cout << "[" << i << "]: ";
		max = maxOfArrStr(multiRowArr[i], COL);
		cout << max << endl;
	}	
	system("pause");
	return 0;
}

int maxOfArrStr(int *strPtr, int size) {
	int max;
	max = *strPtr++;
	for (int i = 1; i < size; i++, strPtr++) {
		if (*strPtr > max) max = *strPtr;
	}
	return max;
}
void randArr(int *ptr, int sizeArr) {

	for (int i = 0; i<sizeArr; i++, ptr++)
		*ptr = rand() % 21 - 10;
}

void multiRandArr(int *ptr, int row, int col) {

	for (int i = 0; i < row; i++, ptr+=col) {
		randArr(ptr, col);
	}
}
void printArr(int a[], int sizeArr) {
	int *ptr;
	ptr = a;
	for (int i = 0; i < sizeArr; i++, ptr++)
		printf("%3d ", *ptr);
}
void multiPrintArr(int *ptr, int row, int col) {

	for (int i = 0; i < row; i++, ptr += col) {
		printArr(ptr, col);
		cout << endl;
	}
}


