// Wprowadzenie: 
// W zadaniu zostanie zdefiniowane slowo kluczowe static
// 
// static - pozwala na zdefiniowanie zmiennej statycznej. 
// "Statyczność" polega na zachowaniu wartości pomiędzy 
// kolejnymi **definicjami** tej samej zmiennej. 
// Jest to przede wszystkim przydatne w funkcjach. 
// Gdy zdefiniujemy zmienną w ciele funkcji, to zmienna ta będzie 
// od nowa definiowana wraz z domyślną wartością (jeżeli taką podano). 
// W wypadku zmiennej określonej jako statyczna, 
// jej wartość się nie zmieni przy ponownym wywołaniu funkcji

// zadanie: zmodyfikuj ponizszy program aby wynikiem jego dzialania bylo:
// 1
// 2
// 3

// DYSKUSJA: czy inizjalizacja zmiennej statycznej jest konieczna? (typy wbudowane)

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
int fun();

/////////////////////////////////////////////////////////////////
// MAIN FUNCTION  
int main() {
  printf("%d \n", fun());
  printf("%d \n", fun());
  printf("%d \n", fun());
  return 0;
}

/////////////////////////////////////////////////////////////////
//
int fun() {			// DYSKUSJA: zakres (scope) funkcji a definicja i wartosc zmiennej.
  static int count = 0; 
  count++;
  return count;
}