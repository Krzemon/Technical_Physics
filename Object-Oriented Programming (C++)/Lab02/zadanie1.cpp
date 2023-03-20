#include <iostream>
#include <ctime>
#include <cstdlib>
int main(int argc,char** argv) {
  int rok,a,b;
  //std::cout<<"Podaj rok: "<<std::endl;
  //std::cin>>rok;
  
  //std::cout<<"Podaj a: "<<std::endl;
  //std::cin>>a;
  //std::cout<<"Podaj b: "<<std::endl;
  //std::cin>>b;

  a=atoi(argv[1]);
  b=atoi(argv[2]);
  std::cout<<a<<std::endl;
  std::cout<<b<<std::endl;
  srand(time(NULL));
  rok=rand()%1000+1000;
  if((rok%4==0)||((rok%100==0)&&(rok%400==0)))
    std::cout<<"Rok jest przestepny"<<std::endl;
  else
    std::cout<<"Rok nie jest przestepny"<<std::endl;
}