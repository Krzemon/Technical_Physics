#include <stdio.h>
#include <math.h>
#define PI 4.0 * atan2(1,1)

void CartToPolar(float x,float y,float *r,float *phi) {
*r = sqrt(x*x+y*y);
*phi=atan2(y,x);
}


void PolarToCart(float r,float phi,float *x,float *y) {
int m=phi/PI;
if(r<0)
  puts("Wpolrzedna r jest ujemna!");
else {
  /*
if(phi>=PI) {
  phi=phi-m*PI;
}
else if(phi<-PI) {
  phi=phi+m*PI;
}
*/
*x = r*cos(phi);
*y = r*sin(phi);
}
}


/*
void PrintCoordInfo(const char*, float, const char*, float) {
}
*/


void PrintPolarInfo(float r, float phi) {
float phii = (180*phi)/3.14;
//PI robi inna wartosc
puts("[INFO]: Polar coordinates:");
printf("[INFO]: r = %.3f\n", r);
printf("[INFO]: phi [deg] = %.3f\n", phii);
}

void PrintCartInfo(float x, float y) {
puts("[INFO]: Cartesian coordinates:");
printf("[INFO]: x = %.3f\n", x);
printf("[INFO]: y = %.3f\n", y);
}