#include <iostream>
#include <string>
#include "Osoba.h"

Osoba::Osoba(std::string n,int r): name{n}
{
	year=r;
}

Osoba::~Osoba()
{
	std::cout<<"Usuwamy osobe "<<name<<std::endl;
}