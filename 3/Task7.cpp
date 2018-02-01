/*7.​ Написать рекурсивный 
алгоритм сортировки методом выбора.*/

#include <iostream>
#include <ctime>
#define SIZE 20
using namespace std;
void randArr(int *a, int sizeArr);
void printArr(int *a, int sizeArr);
void sort(int *a, int size);

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arrA[SIZE];
	//Генерация массива А[n]:
	{
		randArr(arrA, SIZE);
		cout << "Несортированный массив А[n]:" << endl;
		printArr(arrA, SIZE);
	}


	system("pause");
}
void sort(int *a, int size) {
	void searchMax(int *now,int *end);


}

void randArr(int *a, int sizeArr) {
	for (int i = 0; i<sizeArr; i++, a++)
		*a = rand() % 201-100;
}
void printArr(int *a, int sizeArr) {
	for (int i = 0; i < sizeArr; i++, a++)
		printf("%4d ", *a);
	cout << endl;
}
