/*3.​ Дано натуральное число N. Вычислить сумму 
его цифр. Нельзя использовать массивы и циклы!
*/

#include <iostream>
#define OSN 2
using namespace std;
void sumOfDigit(int n, int *sum);

void main()
{
	int n=0;
	int sum = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введи число N: ";
	cin >> n;
	sumOfDigit(n, &sum);
	cout << sum << endl;
	
	system("pause");
}
void sumOfDigit(int n, int *sum) {
	if (n / 10) {
		*sum += n % 10;
		n /= 10;
		sumOfDigit(n, sum);
	}
	else *sum += n;
}
