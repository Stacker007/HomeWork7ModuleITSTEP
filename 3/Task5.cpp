/*5.​ Вывести цифры числа справа налево.
Пример: ввод: 179 вывод: 9 7 1. Н
ельзя использовать массивы и циклы!
*/

#include <iostream>
#define OSN 2
using namespace std;
void sumOfDigit(int n);

void main()
{
	int n=0;
	int sum = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введи число N: ";
	cin >> n;
	sumOfDigit(n);
	cout << endl;	
	system("pause");
}
void sumOfDigit(int n) {
	if (n / 10) {
		cout  << n % 10 << " ";
		n /= 10;		
		sumOfDigit(n);		
	}
	else cout << n;
}
