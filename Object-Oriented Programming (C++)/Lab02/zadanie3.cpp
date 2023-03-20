#include <iostream>
#include <cstdlib>

int main(int argc,char** argv) {
  int max=-1;
  for(int i=0; i<(argc-1); ++i){
    int a=atoi(argv[i+1]);
    if(a>max)
    max=a;
    }
    if(max>=0)
    std::cout<<max<<std::endl;
}