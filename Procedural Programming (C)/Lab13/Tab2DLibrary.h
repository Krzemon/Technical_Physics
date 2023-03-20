#include <stdio.h>
#include <stdlib.h>

void Alloc2DIntArray(int*** x,size_t sx, size_t sy) {
      *x = malloc(sy * sizeof(int *));
    for (int i=0; i<sy; i++)
        (*x)[i] = malloc(sx * sizeof(int));
}

void Init2DIntArray(int** x, size_t sx, size_t sy, int a) {
  for (int i = 0; i < sx; i++){
	    for (int j = 0; j < sy; j++)
			x[i][j]=a;
      }
}

void PrintIntMatrix(int** x, size_t sx, size_t sy) {
	for (int i = 0; i < sx; i++){
	    for (int j = 0; j < sy; j++){
        printf("%d ",x[i][j]);  
      }
  printf("\n");
}}


void TransposeIntMatrix(int **x, size_t sx, size_t sy) {
  int temp;
  for (int i = 0; i < sx; i++){
	    for (int j = i; j < sy; j++){
			if(i==j)
        continue;
      else
        temp=x[i][j];
        x[i][j]=x[j][i];
        x[j][i]=temp; 
      }
    }
}

void AddIntMatrix(int **y,int **x1,int **x2, size_t sx, size_t sy) {
	for (int i = 0; i < sx; i++){
	    for (int j = 0; j < sy; j++){
			y[i][j]=x1[i][j]+x2[i][j];
		}
	}
}

int GetIntMatrixDiagonal(int **y, size_t sx, size_t sy) {
  int sum=0;
	for (int i = 0; i < sx; i++){
	    for (int j = 0; j < sy; j++){
			if(i==j)
        sum+=y[i][j];
		}
	}
  return sum;
}

int GetIntMatrixColMax(int **y, int o, size_t sx, size_t sy) {
  int max=y[0][o];
  for(int i=0; i<sx; i++) {
    if(y[i][o]>max)
    max=y[i][o];
  }
  return max;
}
int GetIntMatrixColMin(int **y, int o, size_t sx, size_t sy) {
  int min=y[0][o];
  for(int i=0; i<sx; i++) {
    if(y[i][o]<min)
    min=y[i][o];
  }
  return min;
}

void Free2DIntArray(int ***x,size_t sy) {
      for (int i=0; i<sy; i++)
        free((*x)[i]);
  free(*x);
}