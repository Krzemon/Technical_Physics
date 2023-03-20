////////////////////////////////////////////////////////////////
// WRPOWADZENIE
// Funckja printf() umozliwia wydruk na standardowy strumien wyjscia (terminal).
// Jest zdefiniowana w bibliotece stdio.h
// Użycie: printf(format, argument1, argument2, ...);

// Alternatywa dla printf(...) to funkcja puts(...).
// Funkcja puts() przyjmuje jako swój argument ciąg znaków, 
// który nastepnie bezmyslnie wypisuje na ekran konczac go znakiem przejscia do nowej linii.

// Stosowane typy formatowania (specyfikacja typow)
// %f: liczba zmiennoprzecinkowa typu double (float jest automatycznie konwertowany) 
//     w zapisie dziesiętnym (123.45)
// %d: liczba całkowita ze znakiem w formacie dziesiętnym  
// %i: synonim dla %d  
// %u: liczba całkowita bez znaku w formacie dziesiętnym
// %c: liczba całkowita jest konwertowana na bajt o danej wartości (pojedynczy znak) 
// %s: łańcuch tekstowy (string)
// %p: wskaznik 

// --- formatowanie specjalne ---
// \t: znak tabulacji 
// \n: znak nowej linii

////////////////////////////////////////////////////////////////
// Uwaga ogólna:
// Funkcja printf() w pierwszym polu argumentu zawiera ilosc argumentow
// nastepujacych oraz ich typow, dlatego jesli okresli sie zla ich liczbe
// lub typ to funkcja printf() zwariuje, drukujac zle wartosci.

////////////////////////////////////////////////////////////////
// ZADANIE: output z zadań możemy zapisywać do pliku
// z wykorzystaniem programu tee, np.:
// ./a.out | tee wynik.log

////////////////////////////////////////////////////////////////
// DYSKUSJA: czy/jak komentarze moga zwiekszyc czytelnosc kodu?!

////////////////////////////////////////////////////////////////
// Main program

#include <stdio.h> // biblioteka niezbedna do printf

int main() {

	char napis[] = "Witaj swiecie!";
	puts(napis);
  puts("Witaj swiecie!");
  printf("%s",napis);
	// zadanie: napisz alternatywna wersje puts(napis) za pomoca funkcji printf(...)
  

	///////////////////////////////////////////////////////////
	//
	printf("\n");
	float x=4.50001;	// definicja z inicjalizacją
	float y;			// definicja
	y=5.199999;			// przypisanie wartości
	char ch = 'a';
	printf("%f \n%f\n", x, y);

	///////////////////////////////////////////////////////////
	// tabularyzowany output
	puts("");
	printf("%6f \t %f \t %c\n", x, y, ch);  
	printf("%6f \t %f \t %c\n", x+1, y+1, ch); 		// DYSKUSJA: wyrazenie zamiast zmiennej (?) 
	printf("%6f \t %f \t %d\n", x*2, y*2, ch);		// DYSKUSJA: kod ASCII !!!
	printf("%c\n", ch+1);
	printf("%c\n", ch+2);
	// zadanie: wydrukuj znaki 'A', 'B' wykorzystujac wartosc zmiennej ch
	printf("%c\n", ch-32);
	printf("%c\n", ch-31);
	///////////////////////////////////////////////////////////
	// Drukowanie znakow specjalnych
	printf("Just print the percentage sign %%\n"); 
	printf("Just print the quatation sign \"Cytat\"\n" );
	// zadanie: wykorzystaj kodowanie ASCII do wydrukowania powyzszych znakow specjalnych

	// zadanie: wydrukuj na ekran nastepujacy komunikat, uwzgledniajac znaki specjalne
  char g2= '\';
	puts("Wilgotnosc powietrza w Krakowie (09"\"03"\"2021): 48%");
 printf("Wilgotnosc powietrza w Krakowie (09"\"03"\"2021): 48%");
  return 0;
}