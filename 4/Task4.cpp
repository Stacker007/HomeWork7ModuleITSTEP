/*
4.​ Напишите функцию, которая принимает массив и
количество элементов и возвращает среднее 
арифметическое всех элементов массива. 
Используйте шаблон, чтобы обеспечить работу 
как с целыми, так и с вещественными массивами. 
Аналогично напишите функцию для печати массивов разных типов.
*/

#include <iostream>
#include <ctime>
#define SIZE 4
using namespace std;
template <typename mYtype> double middle(mYtype *a, int size);
template <typename mYtype> void printArr(mYtype *a, int size);
template <typename mYtype> void randArr(mYtype *a, int size);
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arrA[SIZE];
	double arrB[SIZE];
	randArr(arrA, SIZE);
	printArr(arrA, SIZE);
	cout << endl << middle(arrA, SIZE) << endl;

	randArr(arrB, SIZE);
	printArr(arrB, SIZE);

	cout << endl << middle(arrB, SIZE) << endl;
	system("pause");

}

template <typename mYtype>
double middle(mYtype *a, int size) {
	mYtype *end;
	end = a + size;
	mYtype sum = 0;
	while (a<end)
	{
		sum += *a++;
	}
	return double(sum) / size;
}

template <typename mYtype>
void printArr(mYtype *a, int size) {
	for (int i = 0; i < size; i++, a++)
		cout << *a << " ";
	cout << endl;
}

template <typename mYtype> 
void randArr(mYtype *a, int size) {
	for (int i = 0; i< size; i++, a++)
		*a = double(rand() % 20001 - 10000) / 100;
}
