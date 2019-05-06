#include "pch.h"
#include <iostream>
#include "Complex.h"
using namespace std;

void InputErrorMsg()
{
	cout << "Wront input! Input digit in [-1000; 1000] range" << endl;
}
bool Check(int d)
{
	if (d >= -1000 && d <= 1000)
		return 1;
	return 0;
}
Complex Input()
{
	Complex d;
	int tmp = 1;
	cout << "--Input Comlex digit (a + (b)i) in [-1000; 1000] range--" << endl;
	
	while (tmp)
	{
		cout << "A = ";
		cin >> tmp;
		if (Check(tmp))
		{
			d.a = tmp;
			tmp = 1;
			break;
		}
		else
		{
			InputErrorMsg();
			tmp = 1;
		}
			
	}
	
	while (tmp)
	{
		cout << "B = ";
		cin >> tmp;
		if (Check(tmp))
		{
			d.b = tmp;
			tmp = 1;
			break;
		}
		else
		{
			InputErrorMsg();
			tmp = 1;
		}
	}

	return d;
}
void Print(Complex d)
{
	cout << d.a << " + (" << d.b << ")i" << endl;
}

Complex Plus(Complex d1, Complex d2)
{
	Complex res;
	res.a = d1.a + d2.a;
	res.b = d1.b + d2.b;
	return res;
}
Complex Minus(Complex d1, Complex d2)
{
	Complex res;
	res.a = d1.a - d2.a;
	res.b = d1.b - d2.b;
	return res;
}
Complex Multiply(Complex d1, Complex d2)
{
	Complex res;
	res.a = d1.a * d2.a;
	res.b = d1.b * d2.b;
	return res;
}
Complex Divide(Complex d1, Complex d2)
{
	Complex res;
	res.a = 0; res.b = 0;
	if (d2.a == 0 || d2.b == 0)
	{
		cout << "Digit is 0, Divide is impossible!" << endl;
		return res;
	}
	res.a = d1.a / d2.a;
	res.b = d1.b / d2.b;
	return res;
}