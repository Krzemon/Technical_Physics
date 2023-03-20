// ZADNANIE (35 pkt)
// Zaimplementuj program który dla wprowadzonej z klawiatury liczby
// będzie sprawdzał czy jest ona tzw. polindromem - słowo, liczba, fraza,
// które czyta się tak samo od każdej strony (prawo-lewo)
//
// Skorzystaj z funkcjonalnosci zaimplementowanej w programach
// reverse_number.c, count_digits.c 
// -> liczba cyfr w liczbie określa warunek stopu pętli do odrwacania liczby
//
// Poniżej zamieszczono przykład wywołania programu.
#include <stdio.h>

int main() {
    int a, b=0;
    printf("Podaj liczbe a sprawdze czy jest to palindrom: \n");
    scanf("%d",&a);
        int c=a;
    while(a!=0) {
        b*=10;
        b+=a%10;
        a/=10;
    }
    if(c==b)
        printf("TAK! jest to tzw. palindrom");
    else
        printf("No nie jest to zaden palindrom");
    return 0;
 }

/* Przyklady wywołania programu (część wynikowa):

[brachwal@vmate Lab05]$ ./a.out 
Wprowadzona liczba: 1234321
Odwrocona liczba:   1234321
Wprowadzona liczba jest polindromem.

Wprowadzona liczba: 1234
Odwrocona liczba:   4321
Wprowadzona liczba nie jest polindromem.

*/

