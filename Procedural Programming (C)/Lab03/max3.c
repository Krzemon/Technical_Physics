//
// ZADANIE 5 (30 pkt)
// Zaimplementuj funkcjonalnosc szukania maksimum z trzech przekazywanych liczb;
// 1) zadeklaruj cztery zmienne typu całkowitego: x, y, z, max
// 2) Wykorzystaj ponizszy fragment kodu aby zainicjalizowac wartosci zmiennych:
//      printf("Wprowadz wartosci trzech liczb oddzielonych spacja: ");
//      scanf("%d %d %d", &x, &y, &z);
// 3) Wydrukuj wartosci wprowadzone z klawiatury na ekran
// 4) Wykorzystaj wyrazenie if oraz operator && w celu sprawdzenia czy x jest 
//    ma najwiekszą wartość, jeśli tak przypisz ją do zmiennej max
// 5) Wykorzystaj wyrazenie if oraz operator && w celu sprawdzenia czy y jest 
//    ma najwiekszą wartość, jeśli tak przypisz ją do zmiennej max
// 6) Wykorzystaj wyrazenie if oraz operator && w celu sprawdzenia czy y jest 
//    ma najwiekszą wartość, jeśli tak przypisz ją do zmiennej max
// 7) Wydrukuj najwiekszą wartość na ekran


#include <stdio.h>

////////////////////////////////////////////////////////////////

int main() {
 int x,y,z,max;
 printf("Wprowadz wartosci trzech liczb oddzielonych spacja: ");
 scanf("%d %d %d", &x, &y, &z);
 printf("Wprowadziles nastepujace wartosci: %d, %d, %d \n", x, y, z);
  if (x>y && x>z) {
    max=x;
    printf("Najwieksza wartosc ma %d \n", max);
  }
  else if (y>x && y>z) {
    max=y;
    printf("Najwieksza wartosc ma %d \n", max);
  }
  else if (z>x && z>y) {
    max=z;
    printf("Najwieksza wartosc ma %d \n", max);
  }  
  else if (z==x && z==y && x==y) {
    printf("Wszystkie trzy wartosci sa rowne \n");
  }  
  return 0;
}