/*
7.​ Написать рекурсивный алгоритм сортировки методом выбора.
*/

#include <iostream>
#include <ctime>
#define SIZE 10
using namespace std;
void randArr(int *a, int sizeArr);
void printArr(int *a, int sizeArr);
void sortByPaste(int *arrPtr, int *endPtr);
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arrA[SIZE];
	//Генерация  массива  А[n]:
	//(Инициализируем случайными числами)
	{
		randArr(arrA, SIZE);
		cout << "Исходный массив А[n]:" << endl;
		printArr(arrA, SIZE);
	}
	int *endPtr = arrA + SIZE;
	sortByPaste(arrA, endPtr);
	printArr(arrA, SIZE);
	system("pause");
	return 0;
}

void sortByPaste(int *arrPtr, int *endPtr) {
	int *maxPtr = arrPtr;
	int *ptr = arrPtr;
	while (ptr<endPtr) {
		if (*ptr>*maxPtr) 
			maxPtr = ptr;
		ptr++;
	}
	int tmp = *arrPtr;
	*arrPtr = *maxPtr;
	*maxPtr = tmp;
	arrPtr++;
	if (arrPtr<endPtr) 
		sortByPaste(arrPtr, endPtr);
}

void randArr(int *a, int sizeArr) {
	for (int i = 0; i<sizeArr; i++, a++)
		*a = rand() % 21 - 10;
}
void printArr(int *a, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, a++)
		cout << *a << " ";
	cout << endl;
}

