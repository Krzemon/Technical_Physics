#include <iostream>
#include "Osoba.h"

class Pracownik
{
private:
	int id;
	Osoba ps;
	int &pay;
	static int di;
public:
	Pracownik(std::string, int, int&);
	void info();
};