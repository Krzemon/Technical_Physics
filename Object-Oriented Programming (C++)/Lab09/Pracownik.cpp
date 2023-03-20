#include <iostream>
#include "Osoba.h"
#include "Pracownik.h"

int Pracownik::di{};
Pracownik::Pracownik(std::string a, int b, int& c): ps{Osoba(a,b)}, pay{c}
{
	ps.name=a;
	ps.year=b;
	++di;
	id=di;
}

void Pracownik::info()
{
	std::cout<<ps.name<<" (r.ur. "<<ps.year<<") id="<<id<<"; zarobki: "<<pay<<std::endl;
}