/*6.​ Дано слово, состоящее только из строчных 
латинских букв. Проверить, является ли это 
слово палиндромом. Вывести Yes или No. Пример:

Ввод: radar Вывод: Yes

Ввод: yes	Вывод: No

*/

#include <iostream>
#include <cstring>
using namespace std;
bool palindrom(char *n, char *m);

void main()
{
	char str[] = "ragddgar";	
	int len = strlen(str);
	bool yesNo;
	char *m = str + len - 1;
	setlocale(LC_ALL, "rus");
	yesNo = palindrom(str, m);
	if (yesNo) cout << "YES" << endl;
	else cout << "NO" << endl;		
	system("pause");
}
bool palindrom(char *n, char *m) {
	
	if (*n == *m) {
		if (n < m ) {
			n++;
			m--;
			palindrom(n, m);
		}
		else return true;
	}
	else return false;
}
