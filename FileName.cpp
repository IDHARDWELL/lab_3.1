// Lab3.1.cpp 
// < Постолюк Максим > 
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 22
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;//вхідний параметр
	double g;//вхідний параметр
	double y;//вхідний параметр
	double A;//проміжний результат(сталий)
	double B;//проміжний результат(змінний)
	cout << "x = "; cin >> x;
	cout << "g = "; cin >> g;
	A = x * x * x;
	//Спосіб 1 розгалуження в скороченій формі
	if (x < 1)
		B = abs(2 + x) + sin(x) * sin(x);
	if (-1 <= x && x <= 1)
		B = atan(((x * x * x) + 1) + 1);
	if (x > 1)
		B = (exp(cos(x)) + 1 * g * ((1 / x) + 1));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;

	//Спосіб 2: розгалуження в повній формі
	if (x < 1)
		B = abs(2 + x) + sin(x) * sin(x);
	else
		if (-1 <= x && x <= 1)
			B = atan(((x * x * x) + 1) + 1);
		else
			B = (exp(cos(x)) + 1 * g * ((1 / x) + 1));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
