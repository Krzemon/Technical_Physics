#include <iostream>
#include "Complex.h"

Complex::Complex(){}

Complex::Complex(int x, int y)
{
	re=x;
	im=y;
}

bool Complex::operator<(Complex a)
{
	if(((re)*(re)+(im)*(im))<((a.re)*(a.re)+(a.im)*(a.im)))
		return true;
	else 
		return false;
}