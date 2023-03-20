#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc,char** argv) {
  int n{};
  std::cout<<"Podaj wymiar tablicy: "<<std::endl;
  std::cin>>n;
  double tab[n];
  for(int i=0;i<n;++i) {
    tab[i]=sin(i);
    std::cout<<"sin("<<i<<")= "<<tab[i]<<std::endl;
  }
}