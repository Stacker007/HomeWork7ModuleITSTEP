/*2.​ Одномерный массив из 10 элементов инициализировать случайными 
числами от -9 до 9. Вывести исходный массив на консоль. Поменять 
местами первый отрицательный элемент и последний положительный. 
Преобразованный массив также вывести на консоль. При работе с массивом 
использовать только указатели! Оформить в виде отдельных функций: 
1) инициализацию массива, 
2) вывод на консоль, 
3) поиск первого отрицательного, 
4) последнего положительного и 
5) обмен местами двух элементов массива.*/

#include <iostream>
#include <ctime>
#define SIZE 10
using namespace std;
void randArr(int *ptr, int sizeArr);  //1) инициализацию массива, 
void printArr(int *ptr, int sizeArr); //2) вывод на консоль, 
int firstNegative(int *ptr, int sizeArr); //3) поиск первого отрицательного, 
int main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int oneRowArr[SIZE] = {};
	int *fPtr, *lPtr;
	int iF;
		
	cout << "Исходный линейный массив: " << endl;
	randArr(oneRowArr, SIZE);
	printArr(oneRowArr, SIZE);

	 = firstNegative(int *ptr, int sizeArr);

	system("pause");
	return 0;
}


void randArr(int *ptr, int sizeArr) {

	for (int i = 0; i<sizeArr; i++, ptr++)
		*ptr = rand() % 21 - 10;
}

void printArr(int *ptr, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, ptr++)
		printf("%3d ", *ptr);
}

int firstNegative(int *ptr, int sizeArr) {

	return i;
}
