// Lab_04_2.cpp
// < Пастух Оксани >
// Лабораторна робота № 4.2
// Табуляція функції,заданої формулою : функція однієї змінної.
// Варіант 14

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		 << setw(7) << "y" << "      |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = fabs(4 * (x)-1);
		if (x < 0)
			B = (x * x * x * x * x * x * x) - 2 * (x);
		else
			if (x >= 3)
				B = (x * x * x * x) + exp((x * x) + 3);
			else
				B = atan2(exp(x) + 1, 8);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			 << "   |" << setw(10) << setprecision(3) << y
			 << "   |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}