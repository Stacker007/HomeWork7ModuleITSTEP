/*5.​ Напишите функцию, которая принимает
целое число и возвращает количество цифр 
в числе и процент четных цифр.*/

#include <iostream>
using namespace std;
void digits(int a, int *perPtr);
int main()
{	
	setlocale(LC_ALL, "rus");
	int num;
	int count, percent = -1;
	int *perPtr;
	perPtr = &percent;
	cout << "Введите число: ";
	cin >> num;
	system("pause");
	return 0;
}

void digits(int a, int *perPtr) {
	int count = 0, countOfEven = 0;
	if (a == 0) {
		count = 1;
		countOfEven = 100;
		re
	}
	while (!a/10)
	{

	}
}

