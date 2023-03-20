#include <stdio.h>

void FillLinear1D(double *x,int start,int step,int size) {
int i=1;
*x=start;
    //printf("x[%d] = %.2f\n", 0, *x);
while(i<size) {
    *++x=*x+step; 
    //printf("x[%d] = %.2f\n", i, *x);
    ++i; }
}

void PrintData(double *x,double *y,int size) {
for(int i=0; i<size; i++) {
if(i>=0 && i<10)            printf("Point 0%d = (%.2f, %.2f)\n", i, *(x+i), *(y+i));
else if((i>=10 && i<size))  printf("Point %d = (%.2f, %.2f)\n", i, *(x+i), *(y+i));
    }  
}

double GetMean(double *z,int size) {
double suma=0;
int i=0;
while(i<size)     {
    suma+=*(z+i++); }
    return suma/size;
}


double CalculateLinRegCoeff(char A,double *x,double *y,int size) {

    double CalculateLinRegCoeff_A(double *x,double *y,int size) {
    double d=0, a=0, avgx=GetMean(x, size);
    int i=0, j=0;
    while(i<size) {
        d+=(*(x+i)-avgx)*(*(x+i)-avgx); // zapis wskaźnikowy
        //d+=(x[i]-avgx)*(x[i]-avgx); //zapis tablicowy
        i++;
        }

    while(j<size) {
        a+=((x[j]-avgx)*y[j])/d;
        j++; }
        return a;
    }


    double CalculateLinRegCoeff_B(double *x,double *y,int size) {
    //double b = GetMean(y, size) - CalculateLinRegCoeff('a',x,y,size)*GetMean(x, size);
    double b = GetMean(y, size) - CalculateLinRegCoeff_A(x,y,size)*GetMean(x, size); 
    return b;
}


    switch(A) {
        case 'a':    return CalculateLinRegCoeff_A(x,y,size);
        case 'b':    return CalculateLinRegCoeff_B(x,y,size);
        default:printf("[ERROR]: Wrong coefficient type given (use: 'a' or 'b')\n"); return 0;
    }
}

/*  zapis w osobnych funkcjach

    double CalculateLinRegCoeff_A(double *x,double *y,int size) {
    double d=0, a=0, avgx=GetMean(x, size);
    int i=0, j=0;
    while(i<size) {
        d+=(*(x+i)-avgx)*(*(x+i)-avgx); // zapis wskaźnikowy
        //d+=(x[i]-avgx)*(x[i]-avgx); //zapis tablicowy
        i++;
        }

    while(j<size) {
        a+=((x[j]-avgx)*y[j])/d;
        j++; }
        return a;
    }

    double CalculateLinRegCoeff_B(double *x,double *y,int size) {
    //double b = GetMean(y, size) - CalculateLinRegCoeff('a',x,y,size)*GetMean(x, size);
    double b = GetMean(y, size) - CalculateLinRegCoeff_A(x,y,size)*GetMean(x, size); 
    return b;
}

double CalculateLinRegCoeff(char A,double *x,double *y,int size) {
    switch((int)A) {
        case 97:    return CalculateLinRegCoeff_A(x,y,size);
        case 98:    return CalculateLinRegCoeff_B(x,y,size);
        default:printf("[ERROR]: Wrong coefficient type given (use: 'a' or 'b')\n"); return 0;
    }
}
*/
