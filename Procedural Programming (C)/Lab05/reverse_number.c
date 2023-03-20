// ZADNANIE (20 pkt)
// Zaimplementuj program który dla wprowadzonej z klawiatury liczby
// będzie odwracał kolejność cyfr
//
// Do ewaluacji liczby odwróconej wykorzystaj pętlę while
// oraz operatory: %, *, +, /
//
// Poniżej zamieszczono przykład wywołania programu.
#include <stdio.h>

int main() {
    int a, b=0;
    printf("Podaj liczbe do odwrocenia: \n");
    scanf("%d",&a);
    while(a!=0) {
        b*=10;
        b+=a%10;
        a/=10;
    }
    printf("Odwrocona liczba to: %d", b);
    return 0;
}

/* Przyklady wywołania programu (część wynikowa):
[brachwal@vmate Lab05]$ ./a.out 
Wprowadzona liczba: 1234321
Odwrocona liczba:   1234321
*/

