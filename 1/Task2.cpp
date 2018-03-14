/*2. Написать функцию frame, которая выводит на экран
рамку из звездочек. В качестве параметров функции
должны передаваться координаты левого верхнего угла и размеры рамки.*/

#include <iostream>
using namespace std;
void frame(int width, int hight, int x, int y);
int main()
{
	setlocale(LC_ALL, "rus");
	int width, hight, x, y;
	do {
		cout << "Введите ширину рамки: ";
		cin >> width;
		cout << "Введите высоту рамки: ";
		cin >> hight;
		cout << "Введите координату X: ";
		cin >> x;
		cout << "Введите координату Y: ";
		cin >> y;
		if (width < 1 || x < 0 || y < 0) cout << "Размер должен быть положительным, а координаты неотрицательными!";
	} while (width < 1 || x < 0 || y < 0);
	frame(width, hight, x, y);
	system("pause");
	return 0;
}

void frame(int width, int hight, int x, int y) {
	for (int i = 0; i < y; i++) printf("\n"); // делаем перевод курсора у раз
	for (int i = 0; i < hight; i++) {			//перебор  строк
		for (int k = 0; k < x; k++) printf(" ");// В каждой строке отступаем от края x пробелов
		if (i == 0 || i == (hight - 1))         //Первая и последняя строка из звездочек
			for (int t = 0; t< width; t++) printf("*");
		else
		{
			for (int j = 0; j < width; j++) {
				if (j == 0 || j == (width - 1)) //остальные строки вида "*    *"
					printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}

}
