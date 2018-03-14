/*4.​ Написать и протестировать функцию largerOf,
которая заменяет значение двух переменных типа
double большим из этих двух значений.*/

#include <iostream>
using namespace std;
void largerOf(double *a, double *b);
int main()
{	
	setlocale(LC_ALL, "rus");
	double firstNum, secondNum;	
	cout << "Введите первое число: ";
	cin >> firstNum;
	cout << "Введите второе число: ";
	cin >> secondNum;
	largerOf(&firstNum, &secondNum);
	cout << "первое число: " << firstNum << endl;
	cout << "второе число: " << secondNum << endl;
		
	system("pause");
	return 0;
}

void largerOf(double *a, double *b) {
	if (*a > *b) {
		*b = *a;
		return;
	}
	*a = *b;
}

