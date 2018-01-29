/*5.​ Напишите функцию, которая принимает
целое число и возвращает количество цифр 
в числе и процент четных цифр.*/

#include <iostream>
using namespace std;
int digits(int a, int *perPtr);
int main()
{	
	setlocale(LC_ALL, "rus");
	int num;
	int count, percent = -1;
	int *perPtr;
	perPtr = &percent;
	cout << "Введите число: ";
	cin >> num;
	count = digits(num, perPtr);
	cout << "Количество цифр: " << count << endl;
	cout << "процент четных цифр: " << percent << endl;
	system("pause");
	return 0;
}

int digits(int a, int *perPtr) {
	int count = 0, countOfEven = 0;
	if (a == 0) {
		*perPtr = 100;
		return 1;
	}
	while (!a/10)
	{
		count++;
		if (a % 2 == 0) countOfEven++;
		a /= 10;
	}
	*perPtr = countOfEven * 100 / count;
	return count;
}

