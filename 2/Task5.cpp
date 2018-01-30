/*5. Напишите функцию, с переменным количеством аргументов,
которая в качестве обязательного параметра принимает тип 
действия и количество переменных и выполняет выбранное 
действие над этими переменными.« + » - сложение, «*» - 
умножение, «s» - среднее арифметическое.

Например:

double R = calc(‘s’, 5, 3, 4, 5, 3, 7);

cout << R;

На экране мы увидим 4.5.
*/

#include <iostream>
double calc(char ch, int a,...);
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");
	double R = calc('*', 5, 3, 4, 5, 3, 7, 0);

	cout << R << endl;
	system("pause");
	return 0;
}
double calc(char ch, int a, ...) {
	int sum = 0, prod = 1;
	int count = 0;
	int *ptr;
	ptr = &a;
	while (*ptr)
	{
		sum += *ptr++;
		count++;
	}
	ptr = &a;
	while (*ptr)
	{
		prod *= *ptr++;
	}
	switch (ch)
	{
	case '+': return sum; break;
	case '*': return prod; break;
	case 's': return double(sum)/count ; break;
	}
	cout << "Ошибка!" << endl;
	return -1;
}
