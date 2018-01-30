/*3.​ Напишите функцию, которая определяет 
минимальный элемент массива (его значение и номер). 
Внутри функции запрещено использовать команды cin и cout.: 
*/

#include <iostream>
#include <ctime>
#define SIZE 10
using namespace std;
void randArr(int *ptr, int sizeArr);  
void printArr(int *ptr, int sizeArr); 
int minimum(int *ptr, int *iptr, int size);
int main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int oneRowArr[SIZE] = {};
	int indexOf;	
	int contentOf;
	cout << "Исходный линейный массив: " << endl;
	randArr(oneRowArr, SIZE);
	printArr(oneRowArr, SIZE);
	cout << endl;
	contentOf =  minimum(oneRowArr, &indexOf, SIZE);
	
	cout << "Индекс мин. элемнета " << indexOf << endl;
	cout << "Значение мин. элемнета " << contentOf << endl;
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

int minimum(int *ptr, int *iptr, int size) {
	int min = *ptr++;
	*iptr = 0;
	for (int i = 1; i < size; i++, ptr++) {
		if (*ptr < min) {
			min = *ptr;
			*iptr = i;
		}
	}
	return min;
}
