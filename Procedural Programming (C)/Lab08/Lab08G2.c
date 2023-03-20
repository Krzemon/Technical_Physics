// -----------------------------------------------------------------------------
// UWAGA: - wszystkie ponizsze zadania prosze zrealizowac w formie biblioteki ktora
//        rozumiemy jako osobny plik naglowkowy Tab1DLibrary.h,
// -----------------------------------------------------------------------------
// ZADNANIE (100 pkt)
// Możesz wykorzystać do zadania rozwiązanie z poprzednich zajęć
// Zaimplementuj niezbędne funkcje aby program sie kompilował a wynik jego działania
// był taki jak poniżej.
//
// (20 pkt)
// a) FillRandomIntTab1D(...)
// 
// (40 pkt)
// b) HarmonicAverageCharTab1DPtr(...)
//
// (40 pkt)
// c) InverseCharTab1D(...)
// 
////////////////////////////////////////////////////////////////
// Main program

#include "Tab1DLibrary.h"

#define SIZE 1456

int main(){
	srand(time(NULL));
	int tab[SIZE];
	FillRandomIntTab1D(tab,1,SIZE,SIZE);
	Print100IntTab1DPtr(tab, SIZE);
	printf("\n");

	char napis[11] = "Wiosna2021";
	// char* napis = "Wiosna2021";

	double harmonicAv=HarmonicAverageCharTab1DPtr(napis);
	printf("Srednia harmoniczna napisu \"%s\" to %.4lf\n", napis, harmonicAv);
	printf("\n");
	printf("Napis przed: %s\n", napis);
	InverseCharTab1D(napis);
	printf("Napis po:    %s\n", napis);
	return 0;
}
/*
[brachwal@X1C ~]$ ./a.exe
[0000]: 1319
[0100]: 1141
[0200]: 1143
[0300]: 613 
[0400]: 337 
[0500]: 248 
[0600]: 952 
[0700]: 818 
[0800]: 289 
[0900]: 1403
[1000]: 438 
[1100]: 845 
[1200]: 132
[1300]: 314
[1400]: 781

Srednia harmoniczna napisu "Wiosna2021" to 71.7543

Napis przed: Wiosna2021
Napis po:    1202ansoiW
*/