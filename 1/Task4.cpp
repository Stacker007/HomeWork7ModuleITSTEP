/*4.​ Написать и протестировать функцию largerOf,
которая заменяет значение двух переменных 
типа double большим из этих двух значений.*/

#include <iostream>
using namespace std;
void largeOf (double *a, double *b);
int main()
{	
	setlocale(LC_ALL, "rus");
	double firstNum, secondNum;
	double *firstPtr, *secondPtr;
	cout << "Введите первое число: ";
	cin >> firstNum;
	cout << "Введите второе число: ";
	cin >> secondNum;	
	firstPtr = &firstNum;
	secondPtr = &secondNum;
	largeOf(firstPtr, secondPtr);	
	cout << "Первое число: " << firstNum << endl;
	cout << "Второе число: " << secondNum << endl;
	system("pause");
	return 0;
}

void largeOf(double *a, double *b) {
	if (*a > *b) *b = *a;
	else *a = *b;
}
