#include "Sort.h"

#define N 10

int main() {
    float x[N] = {1.2, 1.4, 0.9, 0.2, 2.5, 9.5, 0.0, 0.1,8.1,5.5};
    print(x,N);
    sort(x,N,+1);
    print(x,N);
    sort(x,N,-1);
    print(x,N);
	return 0;
}

/*
[brachwal@PC-P121 solved]$ ./a.exe 
[INFO]: Array values:
1.20 1.40 0.90 0.20 2.50 9.50 0.00 0.10 8.10 5.50 
[INFO]: Array values:
0.00 0.10 0.20 0.90 1.20 1.40 2.50 5.50 8.10 9.50
[INFO]: Array values:
9.50 8.10 5.50 2.50 1.40 1.20 0.90 0.20 0.10 0.0
*/