/*1.Даны два целых числа А и В. Вывести все числа от
А до В в порядке возрастания, если А<В, или в порядке
убывания в противном случае. Пример: ввод: 5 1 вывод: 5 4 3 2 1
*/

#include <iostream>
using namespace std;
void printToOne(int a, int b);

void main()
{
	int a, b;
	setlocale(LC_ALL, "rus");
	cout << "Введи числа А и В: ";
	cin >> a >> b;
	printToOne(a, b);
	cout << endl;
	system("pause");
}
void printToOne(int a, int b) {
	if (a <= b) {
		cout << b << " ";
		if (a == b--) return;
		printToOne(a, b);
	}
	if (a > b) {
		cout << a-- << " ";
		printToOne(a, b);
	}	
}
