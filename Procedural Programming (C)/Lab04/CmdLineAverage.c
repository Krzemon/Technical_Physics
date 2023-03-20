// ZADANIE (30 pkt)
//
// Skompiluj poniższy progam i go uruchom
//    >> Przeanalizuj program zwracając uwagę na to czym rozni sie
//       funkcja Average() od tej z wcześniejszych zajęć?
// a)
// Zmodyfikuj funkcje Average() tak aby obłużyć sytuację wyjątkową
// jaką jest dzielenie przez zero.
// 
// b)
// Na podstawie funkcji SredniaCommandlineWhile()
// zaimplementuj pozostałe funkcję AverageCommandlineFor()
// która będzie działać zupełnie analogicznie, jednak będzie w niej
// wykorzystany inny rodzaj pętli (odpowiednio do nazwy funkcji)
//  
// c)
// Wprowadź do programu obsługę sytuacji wyjatkowych.
// Podpowiedź: istotne jest poprawne obsłużenie danych wprowadzanych przez
// użytkownika programu (może on wprowadzać liczby, lub znaki 'q', 'Q')
// - co jeśli wprowadzi coś innego? 
// Można / należy wykorzystać EXIT_FAILURE
//
// 
// DYSKUSJA: obsługa sytuacji wujątkowych -> exit(...), EXIT_SUCCESS, EXIT_FAILURE


#include <stdio.h>
#include <stdlib.h>
#include "ctype.h"

//////////////////////////////////////////////////////////////////
// Simple command line menu for average calculation
void AverageCommandlineWhile();
void AverageCommandlineFor();

//////////////////////////////////////////////////////////////////
// Aritmetic average functor (it remembers the state itself)
float Average(float m_liczba);

/////////////////////////////////////////////////////////////////
// MAIN FUNCTION
int main()
{
  // Aby w danym momencie pracować nad konkretna (jedną) funkcją
  // zakomentuj wszystkie pozostałe wywołania, pozostaw tylko tę
  // nad którą chcesz pracować:
  AverageCommandlineWhile();
  // AverageCommandlineFor();

  exit(EXIT_SUCCESS);
}

/////////////////////////////////////////////////////////////////
//
void AverageCommandlineFor(){
  puts("[INFO]: AverageCommandlineFor zostala wywolana:");
  char input[100];
  for (int i=0 ; i<101 ; i++)
  {
    
  }
}

/////////////////////////////////////////////////////////////////
//
void AverageCommandlineWhile(){
  puts("[INFO]: AverageCommandlineWhile zostala wywolana:");
  char input[100];  // tablica na wprowadzanie danych. Uwaga: przechowujemy je jako napis
  while (input[0]!='q' && input[0]!='Q'){
    printf("[INFO]: podaj liczbe do sredniej (q aby zakonczyc)\n");
    scanf("%s", input);
    if(isdigit(input[0]))            // sprawdzamy czy to co zostało wprowadzone jest liczbą
      Average(atof(input));          // konwerujemy napis na liczbę typu float 
  }
  printf("[RESULT]: srednia wprowadzonych liczb: %3.3f \n",Average(0));
}

/////////////////////////////////////////////////////////////////
//
float Average(float m_liczba){
	static float licznik;
	static int n;      // Dyskusja: nie jest potrzebna inicjalizacja?
  if(m_liczba==0.){
    float srednia = licznik/n;
    licznik = n = 0;
    return srednia;
  }
  licznik+=m_liczba;
  return licznik/++n;
}
