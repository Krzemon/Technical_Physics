// ZADNANIE (25 pkt)
// Zaimplementuj program który dla wprowadzonej z klawiatury liczby
// będzie wyznaczał i zliczał ilość jej dzielników, definicja:
// Jeżeli liczba naturalna a dzieli liczbę naturalną b bez reszty, 
// to liczba a nazywa się dzielnikiem liczby b, 
// a liczba b nazywa się wielokrotnością liczby a.
//
// W implementacji programu wykorzystaj pętlę for.
// Poniżej zamieszczono przykład wywołania programu.
#include <stdio.h>

int main() {
    int a, n=2;
    printf("Podaj liczbe a: \n");
    scanf("%d", &a);
    printf("Wszystkie dzielniki liczby: 1");
    for (int i=2; i<=a/2; i++) {
        if(a%i == 0) {
            printf(" %d", i);
            n+=1;
        }
    }
    printf(" %d\n", a);
    printf("Liczba %d posiada %d dzielnikow", a,n);

    return 0;
 }

/* Przyklady działania programu (część wynikowa):

Wszystkie dzielniki liczby: 12
1 2 3 4 6 12 
Liczba 12 posiada 6 dzielnikow

Wszystkie dzielniki liczby: 100
1 2 4 5 10 20 25 50 100 
Liczba 100 posiada 9 dzielnikow
*/