/*8.​  Написать рекурсивную функцию, которая принимает 
двумерный массив целых чисел и количество 
сдвигов и выполняет круговой сдвиг массива вправо.

Например:
дан массив:
Сдвигаем на три вправо:

4 5 6 7
1 2 4 1
4 5 6 9

5 6 7 4
2 4 1 1
5 6 9 4
*/

#include <iostream>
#include <ctime>
#define ROW 4
#define COL 5
#define TAB 3
using namespace std;
void randArr(int *a, int sizeArr);
void multiRandArr(int *a, int row, int col);
void printArr(int *a, int sizeArr);
void multiPrintArr(int *a, int row, int col);
void oneTab(int *begPtr, int size);
void tabRow(int *begRowPtr, int col, int tabs);
void multiTabRow(int *beginPtr, int row, int col, int tabs);
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int myArr[ROW][COL];
	
	multiRandArr(myArr[0], ROW, COL);
	multiPrintArr(myArr[0], ROW, COL);
	cout << endl << endl;
	multiTabRow(myArr[0], ROW, COL, 3);
	multiPrintArr(myArr[0], ROW, COL);

	system("pause");
	return 0;
}

void multiTabRow(int *beginPtr, int row, int col, int tabs) {
	if (row) {
		tabRow(beginPtr, col, tabs); //сдвигаем строку
		multiTabRow(beginPtr + col, --row, col, tabs);//Передаем указатель на начало следующей строки
	}
}
void tabRow(int *begRowPtr, int col, int tabs) {
	if (tabs) {
		oneTab(begRowPtr, col);//сдвигаем строку на 1 элемент
		tabRow(begRowPtr, col, --tabs);//передаем указатель на начало строки и количество оставшихся сдвигов
	}
}


void oneTab(int *begPtr, int size) {
	int memEnd = *(begPtr+size-1);//Запоминаем значение последнего элемента
	int *tmpEnd = begPtr + size - 1;//указатель на текущую ячейку
	while (tmpEnd > begPtr) {
		*tmpEnd = *(tmpEnd - 1);
		tmpEnd--;
	}
	*begPtr = memEnd;
}
void randArr(int *a, int sizeArr) {
	for (int i = 0; i<sizeArr; i++, a++)
		*a = rand() % 91 - 45;
}
void multiRandArr(int *a, int row, int col) {
	for (int i = 0; i < row; i++, a += col) {
		randArr(a, col);
	}
}
void printArr(int *a, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, a++)
		printf("%3d ", *a);
}
void multiPrintArr(int *a, int row, int col) {
	for (int i = 0; i < row; i++, a += col) {
		printArr(a, col);
		cout << endl;
	}
}
