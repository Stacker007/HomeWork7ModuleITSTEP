/*
1.​ Напишите перегруженную функцию myArea, которая вычисляет площадь

а) квадрата (один параметр)

b) прямоугольника (два параметра)
*/
#include <iostream>
#define LEN 5
#define WIDTH 3
#define HEIGHT 7
using namespace std;
int myArea(int lenSq);
int myArea(int width, int height);
int main() {
	setlocale(LC_ALL, "rus");

	cout << "Площадь квадрата со стороной " << LEN << " равна " << myArea(LEN) << endl;
	cout << "Площадь прямоугольника со сторонами " << WIDTH << " и "
		<< HEIGHT << " равна " << myArea(WIDTH, HEIGHT) << endl;

	system("pause");
	return 0;
}

int myArea(int lenSq) {
	return lenSq * lenSq;
}
int myArea(int width, int height) {
	return width * height;
}
