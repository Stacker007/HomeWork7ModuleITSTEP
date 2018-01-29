/*3 Написать функцию, которая сравнивает два 
целых числа и возвращает результат сравнения
 виде одного из знаков: >, < или = .*/

#include <iostream>
using namespace std;
void frame(int width, int x, int y);
int main()
{
	setlocale(LC_ALL, "rus");
	int firstNum, secondNum;
	do {
		cout << "Введите первое число: ";
		cin >> firstNum;
		cout << "Введите второе число: ";
		cin >> secondNum;
		cout << "Введите координату Y: ";
		cin >> y;
		if (width < 1 || x < 0 || y < 0) cout << "Размер должен быть положительным, а координаты неотрицательными!";
	} while (width < 1 || x < 0 || y < 0);
	frame(width, x, y);
	system("pause");
	return 0;
}

void frame(int width, int x, int y) {
	for (int i = 0; i < y; i++) printf("\n"); // делаем перевод курсора у раз
	for (int i = 0; i < width; i++) {			//перебор  строк
		for (int k = 0; k < x; k++) printf(" ");// В каждой строке отступаем от края x пробелов
		if (i == 0 || i == (width - 1))         //Первая и последняя строка из звездочек
			for (int t=0; t< width; t++) printf("*");
		else
		{
			for (int j = 0; j < width ; j++) {
				if (j == 0 || j == (width - 1)) //остальные строки вида "*    *"
					printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
						
}
