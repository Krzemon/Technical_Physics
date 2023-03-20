#pragma once
#include <iostream>
#include <string>

class Pracownik;

class Osoba
{
private:
	std::string name;
	int year;
public:
	Osoba(std::string,int);
	~Osoba();
	friend class Pracownik;
};