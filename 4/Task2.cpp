//ШАБЛОН

/*
Написать функцию, которая меняет порядок элементов 
передаваемого массива на обратный. Внутри функции 
запрещено использовать вспомогательный массив. Использовать
шаблон для реализации функций, работающих с различными типами массивов.
*/
#include <iostream>
#define LEN 15
using namespace std;
void randArr(int *a, int sizeArr);
void printArr(int *a, int sizeArr);
void randArr(double *a, int sizeArr);
void printArr(double *a, int sizeArr);
template <typename mYtype>
mYtype reversArr(mYtype *a, int size) {
	mYtype *end;
	end = a + size - 1;
	while (a<end)
	{
		mYtype tmp = *a;
		*a++ = *end;
		*end-- = tmp;
		return 0;
	}
}
int main() {
	setlocale(LC_ALL, "rus");
	int arrInt[LEN];
	double arrDouble[LEN];

	randArr(arrInt, LEN);
	printArr(arrInt, LEN);
	reversArr(arrInt, LEN);
	printArr(arrInt, LEN);
	randArr(arrDouble, LEN);
	printArr(arrDouble, LEN);
	reversArr(arrDouble, LEN);
	printArr(arrDouble, LEN);

	system("pause");
	return 0;
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
void randArr(double *a, int sizeArr) {
	for (int i = 0; i< sizeArr; i++, a++)
		*a = double(rand() % 20001 - 10000)/100;
}
void printArr(double *a, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, a++)
		cout << *a << " ";
	cout << endl;
}
