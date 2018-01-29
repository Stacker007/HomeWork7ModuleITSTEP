/*3 Написать функцию, которая сравнивает два
целых числа и возвращает результат сравнения
виде одного из знаков: >, < или = .*/

#include <iostream>
using namespace std;
char result (int a, int b);
int main()
{
	
	setlocale(LC_ALL, "rus");
	int firstNum, secondNum;
	char res;
		cout << "Введите первое число: ";
		cin >> firstNum;
		cout << "Введите второе число: ";
		cin >> secondNum;
		res = result(firstNum, secondNum);
		cout << "Функция возврвтила: "<< res << endl;
	system("pause");
	return 0;
}

char result(int a, int b) {
	if (a > b) return '>';
	if (a < b) return'<';
	return '=';
}

