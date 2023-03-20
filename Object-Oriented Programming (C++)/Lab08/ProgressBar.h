#include <iostream>

class ProgressBar{
private:
	double G;
public:
	ProgressBar(double);
	void loop(int);
	void percent(int);
	void todo(double, double*,int);
	char back();
	//void refresh(double);
};