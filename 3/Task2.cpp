/*2.​ Дано число n. Вывести YES, если n 
является точной степенью двойки, NO – в 
противном случае. Операцию возведения в 
степень нельзя использовать!
*/

#include <iostream>
#define OSN 2
using namespace std;
bool stepen(int *n);

void main()
{
	int n;
	bool in;
	setlocale(LC_ALL, "rus");
	cout << "Введи числа А и В: ";
	cin >> n;
	in = stepen(&n);
	if (in) cout << "YES" << endl;
	else cout << "NO" << endl;
	system("pause");
}
bool stepen(int *n) {
	if (*n % OSN == 0) {
		if (*n / OSN == 1) return true;
		*n /= OSN;
		stepen(n);
	}
	else return false;
}
