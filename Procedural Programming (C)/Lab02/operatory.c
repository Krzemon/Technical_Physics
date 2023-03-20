////////////////////////////////////////////////////////////////
// Wprowadzenie
// W niniejszym zadaniu zostaną zdefiniowane konkretne typy i rodzaje operatorow
// (ale nie wszystkie!)

///////////////////////////////////////////////////////////
// OPERATORY ARYTMENTYCZNE
// służą do wykonywania wszelkiego rodzaju działań na liczbach takich jak:
// "+" - dodawanie
// "-" - odejmowanie
// "*" - mnożenie
// "/" - dzub rzeczywiste. (jeśli argumentami są liczby całkowite, operator będzie wykonywał dzielenie całkowite, 
//       natomiast dla liczb rzeczywistych operator wykona dzielenie rzeczywiste. (przykład poniżej)
// "%" - reszta z dzielenia dwóch liczb całkowitych


///////////////////////////////////////////////////////////
// INKREMENTACJA / DEKREMENTACJA
// Aby skrócić zapis wprowadzono dodatkowe operatory: inkrementacji ("++") i dekrementacji ("--"), 
// które dodatkowo mogą być pre- lub postfiksowe. W rezultacie mamy więc cztery operatory:
// pre-inkrementacja ("++i"),
// post-inkrementacja ("i++"),
// pre-dekrementacja ("--i"),
// post-dekrementacja ("i--").

////////////////////////////////////////////////////////////////
// ZADNANIE
// Prosze dopisac drukowanie na ekran wynikow dzialan
// uwzgledniajac odpowiednie typy formatowania


////////////////////////////////////////////////////////////////
// Main program
#include <stdio.h>

int main() {

	int a = 10, b = 3, wynik1;
	wynik1 = a / b; 			// dzielenie całkowite
	wynik1 = a % b; 
	wynik1 = b % a; 
	float c = 10, d = 3, wynik2;
	wynik2 = c / d; 			// dzielenie rzeczywiste
	printf("%f\n",wynik2); 		// wydruk: 3.333333
	printf("%d\n", b%a );

	// DYSKUSJA: Jak mozna poradzic sobie z dzieleniem calkowitym? Rzutowanie typow.
	// zadanie: zaokragalnie liczby (np. 1.2 -> 1.0; 1.6 -> 2.0)
	// Podpowiedz: w języku C konwersja liczb zmiennoprzecinkowych na całkowite 
	//             powoduje odrzucenie ("obciecie") czesci ulamkowej.

	//wynik2 = (int)(wynik2+0.5);
	printf("%f\n",wynik2); // wydruk: 3.000000

	// Pamiętaj!!! Inkrementacja i dekrementacja dziala tylko na zmiennych typu calkowitego.
	// Ponadto operatory pre- zwracają nową wartosc argumentu, natomiast post- starą wartosc argumentu.
	// DYSKUSJA: Co oznacza powyzsze? Kilka przykladow...
	

	///////////////////////////////////////////////////////////
	// Przypisanie polaczone z operacja (zapis skrotowy):
	// zmienna [operator matematyczny][=] wartosc;
	// ZADANIE: wykonaj kilka przykladowych operacji przypisania
	//          polaczona z operacja arytmetyczna, wg powyzszego
	//          schematu, wynik drukuj na ekran. Wykonaj zadanie dla:
	//          /, +, -, %, oraz wyzej zdefiniowanych zmiennych

	return 0;
}