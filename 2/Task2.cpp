/*2.​ Одномерный массив из 10 элементов инициализировать случайными 
числами от -9 до 9. Вывести исходный массив на консоль. Поменять 
местами первый отрицательный элемент и последний положительный. 
Преобразованный массив также вывести на консоль. При работе с массивом 
использовать только указатели! Оформить в виде отдельных функций: 
+1) инициализацию массива, 
+2) вывод на консоль, 
+3) поиск первого отрицательного, 
4) последнего положительного и 
5) обмен местами двух элементов массива.*/

#include <iostream>
#include <ctime>
#define SIZE 50
using namespace std;
void randArr(int *ptr, int sizeArr);  //1) инициализацию массива, 
void printArr(int *ptr, int sizeArr); //2) вывод на консоль, 
int firstNegative(int *ptr, int sizeArr); //3) поиск первого отрицательного, 
int lastPositive(int *ptr, int sizeArr);
int main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int oneRowArr[SIZE] = {};
	int *fPtr, *lPtr;
	int indexOfFN;		
	cout << "Исходный линейный массив: " << endl;
	randArr(oneRowArr, SIZE);
	printArr(oneRowArr, SIZE);
	cout << endl;
	indexOfFN= firstNegative(oneRowArr, SIZE);
	fPtr = oneRowArr + indexOfFN;
	indexOfFN = lastPositive(oneRowArr, SIZE);
	lPtr = oneRowArr + indexOfFN;
	int tmp = *fPtr;
	*fPtr = *lPtr;
	*lPtr = tmp;
	cout << "Итоговый массив: " << endl;
	printArr(oneRowArr, SIZE);
	cout << endl;
	system("pause");
	return 0;
}


void randArr(int *ptr, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, ptr++)
		*ptr = rand() % 19 - 9;
}

void printArr(int *ptr, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, ptr++)
		printf("%3d ", *ptr);
}

int firstNegative(int *ptr, int sizeArr) {
	for (int i=0; i < sizeArr; i++, ptr++)
		if (*ptr<0) return i;
}

int lastPositive(int *ptr, int sizeArr) {
	ptr = ptr + sizeArr - 1;
	for (int i = sizeArr - 1; i >= 0; i--, ptr--)
		if (*ptr > 0) return i;
}
