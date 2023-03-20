#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void stoowa(int tab[],int size) {
    for(int i=0; i<size; i+=100) 
        printf("array[%d] = %d\n", i, tab[i]); }

/*
void HarmonicAverageCharTab1D(char bat[]) {
double sum=0; 
int n = sizeof bat;
for (int i=0; i<n; i++)
sum+=1/bat[i]; 
printf("Srednia harmoniczna wynosi %.5Lf", n/sum);
}
*/
void HarmonicAverageCharTab1D(char bat[]) {
int lenght = strlen(bat);
double mian=0;
for (int i=0; i<lenght ; i++){
    mian += 1/(float)bat[i];
} 
double harm=lenght/mian;
printf("\nSrednia harmoniczna wynosi: %.3f\n", harm);
}

void InverseAndPrintCharTab1D(char word[]) {
int lenght = strlen(word);
char change[lenght];
for (int i=0; i<lenght; i++) {
    change[i]=word[lenght-1-i];
}
printf("Odwrocone nazwisko: %s\n", change);
}


