#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>
//#include <complex>

int main(int argc,char** argv){
  switch(argc-1){

    case 0: 
        std::cout<<"No arguments provided."<<std::endl;  break;
    case 1:{
      srand(time(NULL));
      int num = atoi(argv[1]);
      int los=rand()%num;
      std::cout<<"Zakres losowania liczby wynosi [0, "<<los<<"]"<<std::endl;
      std::cout<<"Wszystkie liczby nieparzyste ponizej tej wylosowanej wartosci sa podane ponizej:"<<std::endl;
      switch(num%2){
        int i;
      case 0:{
        while(i>=0){
         i=num-1;
          std::cout<<i<<", ";
          i-=2;}
        std::cout<<"\b \b"<<std::endl;
        break;}

      case 1:{
        while(i>=1){
         i=num-2;
          std::cout<<i<<", ";
          i-=2;}
        std::cout<<"\b \b"<<std::endl;
        break;}
    }

      }
      case 2:{
      double a=atof(argv[1]), b=atof(argv[2]);
      std::cout<<"Do programu podano funkcje f(x) = ";
      switch((int)a) {
        case 0:{
          std::cout<<b;
          if(b!=0)  std::cout<<"To rownanie jest sprzeczne"; break;
        }
        default:{
          std::cout<<a<<"*x + ("<<b<<")"<<std::endl;
          double c=-b/a;
          std::cout<<"Rozwiazaniem rownania f(x) = 0 jest x = "<<c<<std::endl; break;
        } 
      }
    }

      case 3: 
      double a=atof(argv[1]), b=atof(argv[2]), c=atof(argv[3]);
      std::cout<<"Do programu podano funkcję f(x) = ";
        switch((int)a){
          case 0: break;
          default: std::cout<<a<<"*x^2 + "; break;
        }
        switch((int)b){
          case 0: break;
          default: std::cout<<"("<<b<<")"<<" + "; break;
        }
        switch((int)c){
          case 0: break;
          default: std::cout<<"("<<c<<")"<<std::endl;
        }
        double delt=b*b-4*a*c;

        if(delt<0){
          std::cout<<"Brak rozwiazan rzeczywistych!"<<std::endl;
          /*
          std::cout<< "x1 = "<<(-b-sqrt(delt)*sqrt(-1))/(2*a)<<std::endl;
			    std::cout<< "x1 = "<<(-b+sqrt(delt)*sqrt(-1))/(2*a)<<std::endl;
          */
        }
        else if(delt==0){
          std::cout<<"Rownanie ma tylko jedno rozwiazanie:"<<std::endl;
          std::cout<<"x_0 = "<<-b/(2*a)<<std::endl;
        }
        else{
          std::cout<<"Rownanie ma dwa rozwiazania:"<<std::endl;
          std::cout<<"x_1 = "<<(-b-sqrt(delt))/(2*a)<<std::endl;
          std::cout<<"x_2 = "<<(-b+sqrt(delt))/(2*a)<<std::endl;
        }
        //default:
      //std::cout<<"Too many arguments provided - don't know what to do."<<std::endl; break;
  }
}