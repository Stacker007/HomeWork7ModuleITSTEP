/*3. 1.​ Написать функцию, которая возвращает истину, 
если ее аргумент – простое целое число, и ложь, если 
не простое. Простое число – это число, которое делиться 
ТОЛЬКО на 1 и на себя (2, 5, 7, 11 и т.д.).*/

#include <iostream>
using namespace std;
bool simple(int num);
int main()
{
	setlocale(LC_ALL, "rus");
	int num;
	cout << "Введите число: " ;
	cin >> num;
	if (simple(num)) cout << "true" << endl;
	else cout << "false" << endl;	
	system("pause");
	return 0;
}

bool simple(int num) {
	for (int i = 2; i < num; i++)
		if (num%i == 0) return false; //Если встречаетя второй делитель, то false
	return true;
}
