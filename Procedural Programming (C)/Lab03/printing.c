// ZADANIE 1 (10 pkt)
// Prosze dopisac drukowanie na ekran zmiennych i wynikow dzialan
// uwzgledniajac odpowiednie typy formatowania
// UWAGA: należy zadbać o czytelność wydruku na ekran.
//
// ZADANIE 2 (10 pkt)
// Dopisz wywołania funkcji printf() ktore będą drukować
// Twoje Imie i Nazwisko w kilku wersjach:
//    a/ pelny string
//    b/ 5 liter od lewej strony
//    c/ 5 liter od prawej strony
// UWAGA: przechować Imie i Nazwisko w zmiennej;

#include <stdio.h>
char proc='%' ;
int main() {

	// ZADANIE 1
	int a = 10, b = 3, wynik11, wynik12, wynik13;
	wynik11 = a / b; // dzielenie całkowite
	wynik12 = a % b; 
	wynik13 = b % a; 
  
  printf("dzielenie całkowite: \n");
  printf("a / b = %d \n", wynik11);
  printf("a %c b = %d \n", proc, wynik12);
  printf("b %c a = %d \n \n", proc, wynik13);

	float c = 10, d = 3, wynik2;
	wynik2 = c / d; // dzielenie rzeczywiste
  printf("dzielenie rzeczywiste: \n");
  printf("c / d = %f \n", wynik2);
    
	// ZADANIE 2

  char imie[] = "Przemysław Ryś";
  char space = ' ';
	puts("");
	printf("a) %s \n", imie);
  printf("b) %c%c%c%c%c\n", imie[0],imie[1], imie[2], imie[3], imie[4]);
  printf("c) %c%c%c%c%c%c \n", imie[14], imie[13], imie[12], space, imie[10], imie[9]);
	return 0;
}