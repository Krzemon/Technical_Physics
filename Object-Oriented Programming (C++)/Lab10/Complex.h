#pragma once
#include <iostream>

class Complex
{
		int re;
		int im;
	public:
		Complex();
		Complex(int,int);
		bool operator<(Complex);
};