// ZADNANIE (20 pkt)
// Zaimplementuj program który dla wprowadzonej z klawiatury liczby
// będzie zliczał ilość cyfr. Wykorzystaj do tego pętlę do-while.
// Aby zweryfikować własny algorytm zliczania cyfr porównaj jego wynik
// porównaj go z tym co zwraca logarytm ( log10(number), ale wykorzystaj tutaj
// również operator ? : ). 
// Poniżej zamieszczono przykład wywołania programu.
//
// Uwaga: funckja log10 jest dostępna z biblioteki math.h, do linkowania
// programu możliwe że trzeba użyć -lm jak argument do kompilatora!
#include <stdio.h>

int main() {
    int a,n=0;
    printf("Podaj liczbe to powiem ile ma znakow: \n");
    scanf("%d", &a);
    do {
    n+=1;
    a = a/10;
    } while(a!=0);
    printf("liczba ma %d cyfr", n);
    return 0;
 }

/* Przyklad wywołania (część wynikowa):
[brachwal@vmate Lab05]$ ./a.out 
Wprowadzona liczba: 1234567
Ilosc cyfr:         7
Ilosc cyfr (log10): 7
*/