#include <iostream>
#include <cmath>


struct Zespolona{double re; double im; }z1,z2;
//struct WynikRownaniaKwadratowego{Zespolona z1,z2; };

double* RownanieKwadratowe(double a,double b, double c){
  double delta;
  delta=b*b-4*a*c;

  if(fabs(delta)==delta){ //czysto rzeczywiste
    z1.re = (-b-sqrt(delta))/(2*a);
    z2.re = (-b+sqrt(delta))/(2*a);}
  else{  //urojone
    delta = -delta;
    z1.re =-b/(2*a);
    z2.re =-b/(2*a);
    z1.im = -sqrt(delta)/(2*a);
    z2.im = sqrt(delta)/(2*a);}
    return 0; //tego nie mialem
}


void WypiszWynik(Zespolona num){
  std::cout<<"Re{z_1} = "<<num.re<<"  "<<"Im{z_1} = "<<num.im<<std::endl;}

void JestUrojona(Zespolona num){
  if(num.im != 0) std::cout<<"true";
  else std::cout<<"false";}

void JestRzeczywista(Zespolona num){
  if((num.re != 0)&&(num.im == 0)) std::cout<<"true";
  else std::cout<<"false";}

int main(int argc, char* argv[]){
  
  double a=2, b=1, c=1;

  switch(argc){
    case 1: {RownanieKwadratowe(a,b,c); break;}
    case 4:
      a=atof(argv[1]);
      b=atof(argv[2]);
      c=atof(argv[3]);
      {RownanieKwadratowe(a,b,c); break;}
    default: std::cout<<"Podaj trzy argumenty";
  }
  
  WypiszWynik(z1);
  WypiszWynik(z2);
    std::cout<<'\n'<<"z1 jest urojona:"<<std::endl;
  JestUrojona(z1);
    std::cout<<'\n'<<"z1 jest rzeczywista:"<<std::endl;
  JestRzeczywista(z1);
    std::cout<<'\n'<<"z1 jest urojona:"<<std::endl;
  JestUrojona(z2);
    std::cout<<'\n'<<"z1 jest rzeczywista:"<<std::endl;
  JestRzeczywista(z2);
    std::cout<<std::endl;
}

