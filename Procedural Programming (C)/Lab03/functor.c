
// ZADANIE 3 (30 pkt)
// 1. Skompiluj poniższy progam i go uruchom
//  	- zwróć uwagę że nie działa on poprawnie!
//
// 2. Napraw działanie poniższego programu!
//    DYSKUSJA: jak najlepiej debugować program?
//
// 3. Zaimplementuj funkcjonalność resetowania functora,
//	  np. poprzez wyłowanie Average(0);
//
// DYSKUSJA: Zmienna statyczna, inkrementacja, dekrementacja
// DYSKUSJA: Sytuacje wyjątkowe w programie, możliwe rozwiązania, debugowanie


#include <stdio.h>

//////////////////////////////////////////////////////////////////
// Aritmetic average functor (it remembers the state itself)
float Average(float m_liczba);

/////////////////////////////////////////////////////////////////
//
int main() {
  printf("%f \n", Average(0.5));
  printf("%f \n", Average(0.5));
  printf("%f \n", Average(2.5));
  printf("%f \n", Average(6.0));
  printf("%f \n", Average(0.));
  return 0;
}

/////////////////////////////////////////////////////////////////
// Wyliczanie i przechowywanie wartosci sredniej dla kolejnych
// liczb przekazywanych jako argument
float Average(float m_liczba){
	static float srednia;
	static int n;
  float u=0, nowasrednia=0;
	srednia=m_liczba + srednia;
  n++;
  u = srednia/n;

	return u;
}