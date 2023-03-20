// ZADANIE 4 (20 pkt)
// Zaimplementuj funkcjonalnosc szukania maksimum z dwoch przekazywanych liczb;
// 1) zadeklaruj dwie zmienne typu całkowitego: x, y
// 2) Wykorzystaj ponizszy fragment kodu aby zainicjalizowac wartosci zmiennych:
//      printf("Wprowadz wartosci dwoch liczb oddzielonych spacja: ");
//      scanf("%d %d", &x, &y); // DYSKUSJA: dzialanie funkcji scanf
// 3) Wydrukuj wartosci wprowadzone z klawiatury na ekran
// 4) Wykorzystujac wyrazenie if-else wydrukuj na ekran większą wartość zmiennej.
// 

#include <stdio.h>

/////////////////////////////////////////////////////////////////

int main() {
  
  int x,y;
  printf("Wprowadz wartosci dwoch liczb oddzielonych spacja: ");
  scanf("%d %d", &x, &y);
  printf("Wprowadziles nastepujace wartosci: %d, %d \n", x, y);
  if (x > y)
    printf("Wieksze jest: %d \n", x);
  else if (y > x)
    printf("Wieksze jest: %d \n", y);
  else if (y == x)
    printf ("wartosci sa rowne \n");

 return 0;
}