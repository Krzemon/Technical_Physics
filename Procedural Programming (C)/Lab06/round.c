// Suma punktów 50
// 
// I. Zadanie (25 pkt).
//    Proszę tak przerobić funkcję PersonalHeader() aby wynikiem jej działania
//    był odpowiedni wydruk (wg poniższego przykładu):
//    ---------------------------------
// 	  Date : 03/03/2020 (14:34 pm)
//    Imie i Nazwisko
//    ---------------------------------
//    
// 	  Oczywiście za imie i nazwiko są podstawione własne dane
//
// II. Zadanie (25 pkt).
//    Proszę napisać funkcję Round(x) która jako argument będzie przyjmować
//    liczbę typu float oraz zwracać liczbę całkowitą będącą zaokrągleniem
//	  przekazanago argumentu z dokładnością do 0.5
// 	  Z wykorzystaniem tej funkcji, oraz pętli for (10 iteracji) proszę uzyskać
//	  wydruk taki sam jaki jest zapisany w pliku log
//	  Uwaga: Implementacja wywołania tego wydruku nie może być dłuższa niż dwie 
//    linie instrukcji!!!!
//
//	Uwaga: ostateczny program ma w wyniku drukować zarówno wynik działania
//  	   funkcji PersonalHeader() oraz for + Round
//  Uwaga: naturalnie, dane z nagłówka z wywoływania Państwa programu będą
// 		   różne od tych zapisanych w pliku round.log


#include "PersonalHeader.h"

/////////////////////////////////////////////////////////////////
// 
int Round( float input_number)
{
	if( input_number  >= 0)
		input_number += 0.5;
	else
		input_number -= 0.5;

	return (int) input_number;
}
/////////////////////////////////////////////////////////////////
// MAIN FUNCTION

int main() {
	float a;
  	printf("Podaj liczbe do zaokraglenia: \n");
	scanf("%f", &a);
  	printf("%d\n", Round(a));
  	for(int i=0;i<10;++i)
		printf("0.%d0 %05d\n", Round((float) i),  Round( ( (float) i)/10) ); 

	PersonalHeader("Przemyslaw","Rys");

  	return 0;
}