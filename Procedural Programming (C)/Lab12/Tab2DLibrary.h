#include "stdlib.h"
#include <stdio.h>

/*
#define SIZE_X 3
#define SIZE_Y 3
*/

#define SIZEX 3
#define SIZEY 3

void PrintIntMatrix(int x[][SIZEY], int sx, int sy) {
	for (int i = 0; i < sx; i++){
	    for (int j = 0; j < sy; j++){
        printf("%d ",x[i][j]);  }
  printf("\n");
}
}


void Init2DIntArray(int x[][SIZEY],int o) {
  for (int i = 0; i < SIZEX; i++){
	    for (int j = 0; j < SIZEY; j++)
			x[i][j]=o; }
}

void TransposeIntMatrix(int x[][SIZEY]) {
  int temp;
  for (int i = 0; i < SIZEX; i++){
	    for (int j = i; j < SIZEY; j++){
			if(i==j)
        continue;
      else
        temp=x[i][j];
        x[i][j]=x[j][i];
        x[j][i]=temp; 
      }
    }
}

void AddIntMatrix(int y[][SIZEY],int x1[][SIZEY],int x2[][SIZEY]) {
	for (int i = 0; i < SIZEX; i++){
	    for (int j = 0; j < SIZEY; j++){
			y[i][j]=x1[i][j]+x2[i][j];
		}
	}
}

int GetIntMatrixDiagonal(int y[][SIZEY]) {
  int sum=0;
	for (int i = 0; i < SIZEX; i++){
	    for (int j = 0; j < SIZEY; j++){
			if(i==j)
        sum+=y[i][j];
		}
	}
  return sum;
}

int GetIntMatrixColMax(int y[][SIZEY], int o) {
  int max=y[0][o];
  for(int i=0; i<SIZEX; i++) {
    if(y[i][o]>max)
    max=y[i][o];
  }
  return max;
}
int GetIntMatrixColMin(int y[][SIZEY], int o) {
  int min=y[0][o];
  for(int i=0; i<SIZEX; i++) {
    if(y[i][o]<min)
    min=y[i][o];
  }
  return min;
}
