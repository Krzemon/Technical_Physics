#pragma once
#include <iostream>

class Histogram
{
	private:
  int n=2;
  int nEntries=1000;
  int nBins=50;
  double xMin=0;
  double xMax=1;
  int height=30;
  const char* sign="|";
	public:
	Histogram();
	void set_n(int a);
	void set_nEntries(int a);
	void set_nBins(int a);
	void set_xMin(double a);
	void set_xMax(double a);
	void set_height(int a);
	void set_sign(const char* a);
	void print();
	void Exp();
	void kwadrat();
	void sinus();
	
};