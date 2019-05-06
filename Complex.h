#pragma once

#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex
{
	int a;
	int b;
};


void Print(Complex d);
bool Check(int d);
void InputErrorMsg();
Complex Input();
Complex Plus(Complex d1, Complex d2);
Complex Minus(Complex d1, Complex d2);
Complex Multiply(Complex d1, Complex d2);
Complex Divide(Complex d1, Complex d2);



#endif