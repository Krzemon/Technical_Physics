#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Histogram.h"

int main()
{
	srand(time(0));
	Histogram h1;
	h1.set_sign("*");
	h1.print();
	h1.set_height(100);
	h1.set_xMin(0);
	h1.set_xMax(2);
	h1.sinus();
	h1.kwadrat();
	h1.Exp();
}