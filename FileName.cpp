// Lab3.1.cpp 
// < �������� ������ > 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����
// ������ 22
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;//������� ��������
	double g;//������� ��������
	double y;//������� ��������
	double A;//�������� ���������(������)
	double B;//�������� ���������(������)
	cout << "x = "; cin >> x;
	cout << "g = "; cin >> g;
	A = x * x * x;
	//����� 1 ������������ � ��������� ����
	if (x < 1)
		B = abs(2 + x) + sin(x) * sin(x);
	if (-1 <= x && x <= 1)
		B = atan(((x * x * x) + 1) + 1);
	if (x > 1)
		B = (exp(cos(x)) + 1 * g * ((1 / x) + 1));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;

	//����� 2: ������������ � ����� ����
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
