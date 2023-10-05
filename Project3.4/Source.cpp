// Lab_03_4.cpp
// Барчук Денис Петрович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y >= -2 * x && y >= (2 * x) - R && y <= 0) ||
		(x * x + y * y <= R && x <= 0 && y >= 0 && y <= sqrt(R - x * x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

