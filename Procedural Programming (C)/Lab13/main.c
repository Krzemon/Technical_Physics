// ZADANIE NIEOCENIANE
// Zaimplementuj w bibliotece Tab2DLibrary poniżej wywołane funkcje
// do operacji na dwuwymiarowej tablicy (macierzy) wykorzystując 
// dynamiczą alokację pamięci.
// Zweryfikuje program pod kątem wycieku pamięci za pomocą programu valgrind:
// valgrind ./a.out

#include "Tab2DLibrary.h"

int main(){ 
    size_t size_x = 3;
    size_t size_y = 3;

    int** x; //dwuwymiarowa tablica

    /*
    // Przenieś poniższą funkcjonalność alokacji pamięci
    // na tablicę dwywymiarową do funkcji Alloc2DIntArray()
    x = malloc(size_y * sizeof(int *));
    for (int i=0; i<size_y; i++)
        x[i] = malloc(size_x * sizeof(int));
    */

    Alloc2DIntArray(&x,size_x,size_y);
    
    puts("Matrix of zeros:");
    Init2DIntArray(x,size_x,size_y,0); // inicjalizacja /
    //resetowanie elementów tablicy 2d
    PrintIntMatrix(x,size_x,size_y);   // drukowanie macierzy na ekran
    
    puts("Modified matrix of ones:");
    Init2DIntArray(x,size_x,size_y,1);
    x[0][1]+=1;
    x[0][2]+=2;
    PrintIntMatrix(x,size_x,size_y);
    
    puts("Trasposed modified matrix of ones:");
    TransposeIntMatrix(x,size_x,size_y);
    PrintIntMatrix(x,size_x,size_y);
    
    puts("Added matrix:");
    int** y;
    Alloc2DIntArray(&y,size_x,size_y);

    AddIntMatrix(y,x,x, size_x, size_y);
    PrintIntMatrix(y,size_x,size_y);
    
    puts("Diagonal of the matrix:");
    int d = GetIntMatrixDiagonal(y,size_x,size_y);
    printf("d = %d\n", d);

    puts("i-th col min/max value of the matrix:");
    int min = GetIntMatrixColMin(y,0,size_x,size_y);
    int max = GetIntMatrixColMax(y,0,size_x,size_y);
    printf("min of 0-col = %d\n", min);
    printf("max of 0-col = %d\n", max);
    
    // Bardzo ważna funkcja, zwolnienie pamięcie
    // wcześnie zaalokowanej przez malloc()
    Free2DIntArray(&x,size_y);
    Free2DIntArray(&y,size_y);
    
	return 0;
}

/*
[brachwal@PC-P121 solved]$ ./a.exe
Matrix of zeros:
  0   0   0
  0   0   0
  0   0   0
Modified matrix of ones:
  1   2   3
  1   1   1
  1   1   1
Trasposed modified matrix of ones:
  1   1   1
  2   1   1
  3   1   1
Added matrix:
  2   2   2
  4   2   2
  6   2   2
Diagonal of the matrix:
d = 6
i-th col min/max value of the matrix:
min of 0-col = 2
max of 0-col = 6
*/