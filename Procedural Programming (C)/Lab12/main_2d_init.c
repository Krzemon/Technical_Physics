// ZADANIE (20 pkt)
// Proszę zdefiniować w bibliotece Tab2DLibrary 
// funkcje do drukowania dwuwymarowej tablicy
// jako macierz na ekran.
// Wynik dzialania funkcji do drukowania jest przestawiony poniżej

#include "Tab2DLibrary.h"

int main()
{
	int x[SIZEX][SIZEY] = {{1,11,0}, {22,3,11}, {42,555,5}};

	for (int i = 0; i < SIZEX; i++){
	    for (int j = 0; j < SIZEY; j++){
			printf ("Element at x[%d][%d]: %d\n",i,j,x[i][j]);
		}
	}
    puts("Whole matrix:");
    PrintIntMatrix(x,SIZEX,SIZEY);

    puts("Snippet of the matrix:");
    PrintIntMatrix(x,2,2);

	return 0;
}

/*
[brachwal@PC-P121 solved]$ ./a.exe
Element at x[0][0]: 1
Element at x[0][1]: 11
Element at x[0][2]: 0
Element at x[1][0]: 22
Element at x[1][1]: 3
Element at x[1][2]: 11
Element at x[2][0]: 42
Element at x[2][1]: 555
Element at x[2][2]: 5
Whole matrix:
  1  11   0
 22   3  11
 42 555   5
Snippet of the matrix:
  1  11
 22   3
*/