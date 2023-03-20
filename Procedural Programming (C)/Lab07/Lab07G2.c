// -----------------------------------------------------------------------------
// UWAGA: - wszystkie ponizsze zadania prosze zrealizowac w formie biblioteki ktora
//        rozumiemy jako osobny plik naglowkowy (patrz komentarze do zadan),
//		  - wszelkie operacje na tablicach nalezy wykonac poprzez operator []
// -----------------------------------------------------------------------------
// ZADNANIE (100 pkt)
//
// (20 pkt)
// a) Zadeklaruj tablice 1456 elementową typu int z inicjalizacją do losowej wartości
//    z przedziału 1 - 1456, wykorzystaj #define SIZE.
//    Napisz funkcje i wykorzystaj ja do drukowania na ekran z przekazanej tablicy
//    co 100 element tej tablicy wraz z indeksem tego elementu. Przyklad wywolania:
//    Print100IntTab1D(tab, SIZE); ( implementacja funkcji w pliku Tab1DLibrary.h)
// 
// (40 pkt)
// b) Napisz funkcje i wykorzystaj ja do wyliczenia sredniej harmonicznej z lancucha znakow,
//    Wywolaj ja na przykladzie swojego nazwiska. Przyklad wywolania:
//    double harmonicAv = HarmonicAverageCharTab1D(tabPtr); // uwaga, nie przekazuje tutaj rozmiaru!
//    - jeśli def średniej harmonicznej nie jest Ci znana -> google it!
//    - wyliczona wartosc wydrukuj z odpowiednim komentarzem na ekran z poziomu funkcji main
//    ( implementacja funkcji w pliku Tab1DLibrary.h)
//
// (40 pkt)
// c) Napisz funkcje ktora w przekazanym lancuchu znakow odwroci kolejnosc tych znakow. Wynik
//    tego dzialania wydrukuj 'przed' i 'po' na ekran. Przetestuj ta funkcjonalnosc na przykladzie
//    swojego nazwiska.Przyklad wywolania:
//    puts(tab);
//    InverseAndPrintCharTab1D(tab);
//    ( implementacja funkcji w pliku Tab1DLibrary.h)

////////////////////////////////////////////////////////////////
// Main program

#include "Tab1DLibrary.h"

#define SIZE 1456

int main() {				
char surrname[] = "abecadlo";		
srand(time(NULL));					//
int array[SIZE], i=0;				//
	while(i<SIZE) {					// zadanie 1
		array[i]=rand()%SIZE+1;		//
		i++; }						//
stoowa(array, SIZE);				//

HarmonicAverageCharTab1D(surrname);	// zadanie 2

printf("Nieodwrocone nazwisko: %s\n", surrname);	// zadanie 3
InverseAndPrintCharTab1D(surrname);					//
	return 0;
}