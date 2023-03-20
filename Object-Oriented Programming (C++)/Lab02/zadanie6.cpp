#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc,char** argv) {
  int a,b;
  std::cout<<"Podaj wymiar 1 tablicy: "<<std::endl;
  std::cin>>a;
  std::cout<<"Podaj wymiar 2 tablicy: "<<std::endl;
  std::cin>>b;
  int tab[a][b];
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      tab[i][j]=i*j;
      std::cout<<tab[i][j]<<" ";
    }
    std::cout<<std::endl;
  }
}