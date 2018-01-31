/*4.​ Вывести цифры числа слева направо.
Пример: ввод: 179 вывод: 1 7 9. 
Нельзя использовать массивы и циклы!
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
		int tmp = n % 10;
		n /= 10;
		sumOfDigit(n);
		cout << " " << tmp ;
	}
	else cout << n;
}
