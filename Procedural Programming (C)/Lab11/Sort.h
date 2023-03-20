#include <stdio.h>

void print(float* x,int N) {
puts("[INFO]: Array values:");
for(int i=0; i<N; i++) {
printf("%.2f ", *(x+i));
}
printf("\n");
}

void swap(float *a, float *b) {
float temp=*a;
*a=*b;
*b=temp;
}

void sort(float* x,int N,int sign) {
switch(sign) {
  case 1:
      for(int j=0; j<N-1; j++) {
        for(int i=0; i<N-1; i++) {
          if(*(x+i)>*(x+1+i)) {
            swap(&x[i], &x[i+1]);
          }
        }
      }
    break;
  case -1:
      for(int j=0; j<N-1; j++) {
        for(int i=0; i<N-1; i++) {
          if(*(x+i)<*(x+1+i)) {
            swap(&x[i], &x[i+1]);
          }
        }
      }
    break;
}

}
