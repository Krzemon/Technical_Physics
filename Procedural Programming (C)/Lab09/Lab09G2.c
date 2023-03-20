// -----------------------------------------------------------------------------
// UWAGA: - wszystkie ponizsze zadania prosze zrealizowac w formie biblioteki
//        ktorą rozumiemy jako osobny plik naglowkowy: LinearRegression.h
// -----------------------------------------------------------------------------
// ZADNANIE (100 pkt)
// Celem zadania jest implementacja modelu regresji liniowej, czyli
// dopasowania równania liniowego (y = a * x + b) do punktów pomiarowych.
//
// (15 pkt)
// a) Zaimplementuj funkcje do wypełnienia oraz drukowania wartości tablic:
// 	  FillLinear1D(x,start,step,size), gdzie kolejne argumenty:
//		- x - tablica jednowymiarowa typu double
//		- start - wartość początkowa (0-wy element tablicy)
//		- step - krok liniowego przyrostu (np. x[1] = x[0]+step)
//		- size - rozmiar tablicy
//	  PrintData(x,y,size), format drukowania (patrz niżej), argumenty:
//		- x,y - tablice jednowymiarowe typu double
//		- size - rozmiar tablic x, y
// (10 pkt)
// b) Zaimplementuj funkcję do wyliczenia średniej arytmetycznej z przekazanej tablicy:
// 	 double mean = GetMean(x,size)
//
// (35)
// c) Zaimplementuj funkcję do wyliczenia współczynnika a według formuły:
// 	 d = SUMA(od i=0 do n): [ (x[i] - avg_x)^2 ]
//	 a = { SUMA(od i=0 do n): [ y[i] * (x[i]-avg_x) ] } / d
//	 * gdzie avg_x to średnia wartość z tablicy x. Wykorzystaj wcześniejszą funkcję GetMean.
//	 * Wywołanie z poziomu funcji main wygląda następująco:
//	 double a = CalculateLinRegCoeff('a',x,y,SIZE)
//	 * Funkcja / interfejs CalculateLinRegCoeff() musi zawierać instrukcję switch-case,
//	   oraz wywoływać odpowiednio kolejną funkcje:
//		CalculateLinRegCoeff_A(...)
//		CalculateLinRegCoeff_B(...)
// (35) 
// d) Zaimplementuj funkcję do wyliczenia współczynnika b według formuły:
//  b = avg_y - a * avg_x
//  * gdzie avg_y, avg_x to średnie wartości z tablicy, odpowiednio y oraz x.
//  * Wykorzystaj funkcje GeatMean, oraz CalculateLinRegCoeff_A
//	 * Wywołanie z poziomu funcji main wygląda następująco:
//	 double b = CalculateLinRegCoeff('b',x,y,SIZE)
//	* Finalna implementacja wyliczenia współczynnika b znajduje się w CalculateLinRegCoeff_B(...)
////////////////////////////////////////////////////////////////
// Main program

#include "LinearRegression.h"

#define SIZE 15

int main(){
	double x[SIZE];
	double y[SIZE] = {109.4, 110.1, 112.0, 114.7, 116.0, 118.1, 119.5, 121.8, 123.1, 124.9, 127.6, 129.4, 130.6, 131.9, 134.1};

	FillLinear1D(x,25,5,SIZE);
	PrintData(x,y,SIZE);

	double mean_x = GetMean(x,SIZE);
	double mean_y = GetMean(y,SIZE);
	printf("Average of x[] = %6.2f\n",mean_x);
	printf("Average of y[] = %6.2f\n",mean_y);


	double a = CalculateLinRegCoeff('c',x,y,SIZE); // Próba błędnego wywołania (wydruk patrz niżej) 
	printf("a = %4.3f\n",a);

	a = CalculateLinRegCoeff('a',x,y,SIZE); // Przekierowanie do: CalculateLinRegCoeff_A(x,y,SIZE)
	printf("a = %4.3f\n",a);

	double b = CalculateLinRegCoeff('b',x,y,SIZE); // Przekierowanie do: CalculateLinRegCoeff_B(x,y,SIZE)
	printf("b = %4.3f\n",b);
	return 0;
}
/* Wywołanie programu ma działać następująco:
[brachwal@X1C ~]$ ./a.exe
Point 00 = (25.00, 109.40)
Point 01 = (30.00, 110.10)
Point 02 = (35.00, 112.00)
Point 03 = (40.00, 114.70)
Point 04 = (45.00, 116.00)
Point 05 = (50.00, 118.10)
Point 06 = (55.00, 119.50)
Point 07 = (60.00, 121.80)
Point 08 = (65.00, 123.10)
Point 09 = (70.00, 124.90)
Point 10 = (75.00, 127.60)
Point 11 = (80.00, 129.40)
Point 12 = (85.00, 130.60)
Point 13 = (90.00, 131.90)
Point 14 = (95.00, 134.10)
Average of x[] =  60.00
Average of y[] = 121.55
[ERROR]: Wrong coefficient type given (use: 'a' or 'b')
a = 0.000
a = 0.362
b = 99.797
*/