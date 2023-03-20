
#include "Coordinates.h"

int main() {

    float x,y,r,phi;
    x = 1;
    y = 8;
    CartToPolar(x,y,&r,&phi);
    PrintCartInfo(x,y);
    PrintPolarInfo(r,phi);
    
    x=y=0;
    PolarToCart(r,phi,&x,&y);
    PrintCartInfo(x,y);
	return 0;
}

/*
[brachwal@PC-P121 solved]$ ./a.exe 
[INFO]: Cartesian coordinates:
[INFO]: x = 1.000
[INFO]: y = 8.000
[INFO]: Polar coordinates:
[INFO]: r = 8.062
[INFO]: phi [deg] = 82.875
[INFO]: Cartesian coordinates:
[INFO]: x = 1.000
[INFO]: y = 8.000
*/