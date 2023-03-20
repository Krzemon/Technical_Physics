// ZADANIE (30 pkt)
//
// Napisz program w C typu kalkulator który wykonuje podstawowe operacje arytmetyczne 
// (dodawanie, odejmowanie, mnożenie i dzielenie). Wykorzystaj do tego switch-case. 
// Kalkulator zakłada wprowadzanie dwóch liczb i operatora przez użytkownika. 
// Powinien wykonywać operację zgodnie z wprowadzonym operatorem 
// i musi przyjmować dane w podanym formacie (patrz przykład).
// 
// Przyklad:
// Wprowadz dane według schematu [liczba1] [+ - * /] [liczba2]
// 123 + 34 
// Wynik:
// 123.00 + 34.00 = 157.00


#include <stdio.h>
#include <stdlib.h>

int main(){

  float a,b,d;
  char c;

  printf("Wprowadź działanie (znaki odzielone spacją, do dwóch miejsc po przecinku)\n");
  scanf("%f %c %f", &a, &c, &b);

    switch(c){
       case 42:
        d = a * b;
        printf("%.2f %c %.2f = %.2f", a, c, b, d);
       break;
       case 43:
        d = a + b;
        printf("%.2f %c %.2f = %.2f", a, c, b, d);
       break;
       case 45:
        d = a - b;
        printf("%.2f %c %.2f = %.2f", a, c, b, d);
       break;
       case 47:
        d = a / b;
        printf("%.2f %c %.2f = %.2f", a, c, b, d);
       break;
    }
  printf("\n");
	EXIT_SUCCESS;
}