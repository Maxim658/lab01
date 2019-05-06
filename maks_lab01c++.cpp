#include "pch.h"
#include <iostream>
#include "Complex.h"
#include <fstream>
#include <math.h>

using namespace std;

void Task1()
{
	Complex d1 = Input();
	Complex d2 = Input();
	Complex res;

	char act;
	bool flag = true;
	while (flag)
	{
		cout << "Input action (+-*/): ";
		cin >> act;

		switch (act)
		{
		case '+':
			res = Plus(d1, d2);
			flag = false;
			break;
		case '-':
			res = Minus(d1, d2);
			flag = false;
			break;
		case '*':
			res = Multiply(d1, d2);
			flag = false;
			break;
		case '/':
			res = Divide(d1, d2);
			flag = false;
			break;
		default:
			cout << "Wrong action! Try again!" << endl;
		}
	}

	cout << "Result: ";
	Print(res);
	cout << endl;
}
void Task2()
{
	int n = 0, a = 0, b = 0;
	ifstream f;
	f.open("complex.txt");
	f >> n;

	Complex *p = new Complex[5];
	Complex pMax;
	int max = -1;

	cout << "Complex digits from file: " << endl;
	for (int i = 0; i < n; i++)
	{
		f >> a;
		f >> b;
		p[i].a = a;
		p[i].b = b;

		double mod = sqrt(p[i].a * p[i].a + p[i].b * p[i].b);
		Print(p[i]);
		cout << "Module: " << mod << endl << endl;
		if (mod > max)
		{
			max = mod;
			pMax = p[i];
		}
	}
	cout << "Max Complex digit is: \n";
	Print(pMax);
	cout << "Module: " << max << endl << endl;
}
int Menu()
{
	int c;
	cout << "1. Task1" << endl;
	cout << "2. Task2" << endl;
	cout << "0. Exit" << endl;
	cin >> c;
	return c;
}
int main()
{
	
	int c = 1;
	while (c)
	{
		c = Menu();
		switch (c)
		{
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		define:
			cout << "Wrong input! Try again!" << endl << endl;
		}
	}
	

}

