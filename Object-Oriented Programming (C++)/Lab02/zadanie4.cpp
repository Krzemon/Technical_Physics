#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc,char** argv) {

  switch(argc-1){
    case 0:{
      srand(time(NULL));
      double d=rand()/(double)RAND_MAX;
      if(d!=0)
      std::cout<<d<<std::endl;
    }
    case 1:{
    double b=atof(argv[1])*2+32;
      std::cout<<b<<" Fahrenheitow"<<std::endl; 
    break;
    } 
    case 2:{
    double a=atof(argv[1])*atof(argv[2]);
      std::cout<<a<<" dolarow"<<std::endl; 
    break;
    }
    case 3:{
    double c=(atof(argv[1])+atof(argv[2])+atof(argv[3]))/3;
      std::cout<<sin(c)<<std::endl; 
    break;
    }
    }
}