#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void FillRandomIntTab1D(int array[], int poczatek, int koniec, int rozmiar) {
    for(int i=poczatek-1; i<koniec; i++) 
        array[i]=rand()%rozmiar+1;
}

void Print100IntTab1DPtr(int array[], int rozmiar){
    for(int i=0; i<rozmiar; i+=100) 
    printf("array[%d] = %d\n", i, array[i]);
}

double HarmonicAverageCharTab1DPtr(char pisak[]) {
    int lenght = strlen(pisak), i=0;
    double sum=0;
    while(i<lenght) {
        sum+=1/(double)pisak[i++];
    }
    return lenght/sum;
}

void InverseCharTab1D(char *poczatek) {
    int lenght = strlen(poczatek);
    char *koniec=poczatek+lenght-1, temp;
    for (int i=lenght/2 ;i>0 ;i--) {
    temp=*poczatek;
    *poczatek=*koniec;
    *koniec=temp;
    poczatek++;
    koniec--;
    }
}