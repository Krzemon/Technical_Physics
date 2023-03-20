// ZADANIE (80 pkt)
// Zaimplementuj w bibliotece Tab2DLibrary poniżej wywołane funkcje
// do operacji na dwuwymiarowej tablicy (macierzy)

#include "Tab2DLibrary.h"


int main()
{
    int x[SIZEX][SIZEY];

    puts("Matrix of zeros:");
    Init2DIntArray(x,0);
    PrintIntMatrix(x,SIZEX,SIZEY);
    
    puts("Modified matrix of ones:");
    Init2DIntArray(x,1);
    x[0][1]+=1;
    x[0][2]+=2;
    PrintIntMatrix(x,SIZEX,SIZEY);

    puts("Trasposed modified matrix of ones:");
    TransposeIntMatrix(x);
    PrintIntMatrix(x,SIZEX,SIZEY);

    puts("Added matrix:");
    int y[SIZEX][SIZEY];
    AddIntMatrix(y,x,x);
    PrintIntMatrix(y,SIZEX,SIZEY);
    
    puts("Diagonal of the matrix:");
    int d = GetIntMatrixDiagonal(y);
    printf("d = %d\n", d);
    
    puts("i-th col min/max value of the matrix:");
    int min = GetIntMatrixColMin(y,0);
    int max = GetIntMatrixColMax(y,0);
    printf("min of 0-col = %d\n", min);
    printf("max of 0-col = %d\n", max);
    
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