#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>


int main(int argc , char** argv) {
  
switch (argc){
/////////////////////////////////////////////////////////////////////////////
case 1:
{
 std::cout<<"No arguments provided\n";
 break;
}
/////////////////////////////////////////////////////////////////////////////
case 2:
{
 srand(time(NULL));
 double a=atof(argv[1]);
 double b=rand()/(double)RAND_MAX*a;
 int c=(int)b;
 for(int i=c;i>0;i--)
 {
   if(i%2!=0)
   {
    std::cout<<i<<"\n";
   }
   
 }
 break;
}
/////////////////////////////////////////////////////////////////////////////
case 3:
{
 double a=atof(argv[1]);
 double b=atof(argv[2]);
 if(a==0)
 {
   std::cout<<"Do programu podano funkcję f(x) = "<<b<<" .\nFunkcja ta nie ma miejsc zerowych.\n";
   break;
 }
 double x=(-b)/a;
   if(b!=0)
   {
     std::cout<<"Do programu podano funkcję f(x) = "<<a<<"*x+"<<b<<" .\n Rozwiązaniem równania f(x) = 0 jest x = "<<x<<" .\n";
   }
   else
   {
     std::cout<<"Do programu podano funkcję f(x) = "<<a<<"*x. \nRozwiązaniem równania f(x) = 0 jest x = "<<x<<" .\n";
   }
 break;
}
/////////////////////////////////////////////////////////////////////////////



case 4:
{
double a=atof(argv[1]);
double b=atof(argv[2]);
double c=atof(argv[3]);
if(a==0)
{
  std::cout<<"To nie jest funkcja kwadratowa\n";
  break;
}
else{////////a juz napewno !=0
double delta=(b*b)-(4*a*c);
if(fabs(delta)==delta)
{
  double x1=((-b)-sqrt(delta))/(2*a);
  double x2=((-b)+sqrt(delta))/(2*a);
  if(b!=0)
  {
    if(c!=0)
  {
  std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 + "<<b<<"x + "<<c<<" .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x1<<" oraz x_2 = "<<x2<<"\n";
  }
  else
  {
    std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 + "<<b<<"x.\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x1<<" oraz x_2 = "<<x2<<"\n";
  }
  }
  else
  {
    if(c!=0)
  {
  std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 + "<<c<<" .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x1<<" oraz x_2 = "<<x2<<"\n";
  }
  else
  {
    std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x1<<" oraz x_2 = "<<x2<<"\n";
  }
  }
}
else
{
  double delta2=fabs(delta);
  double x3r=(-b)/(2*a);
  double x3i=(-sqrt(delta2))/(2*a);
  double x4r=(-b)/(2*a);
  double x4i=(sqrt(delta2))/(2*a);
  if(b!=0)
  {
   if(c!=0)
   { 
  std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 + "<<b<<"x + "<<c<<" .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x3i<<"*i + "<<x3r<<" oraz x_2 = "<<x4i<<"*i + "<<x4r<<"\n";
   }
   else
   {
     std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 + "<<b<<"x .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x3i<<"*i + "<<x3r<<" oraz x_2 = "<<x4i<<"*i + "<<x4r<<"\n";
   }
  }
  else
  {
if(c!=0)
   { 
  std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 + "<<c<<" .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x3i<<"*i + "<<x3r<<" oraz x_2 = "<<x4i<<"*i + "<<x4r<<"\n";
   }
   else
   {
     std::cout<<"Do programu podano funkcję f(x) ="<<a<<"x^2 .\nRozwiązaniem równania f(x) = 0 jest x_1 = "<<x3i<<"*i + "<<x3r<<" oraz x_2 = "<<x4i<<"*i + "<<x4r<<"\n";

  }
}



}
}
break;
}



/////////////////////////////////////////////////////////////////////////////
default:
{
std::cout<<"Too many arguments provided - don't know what to do\n";
break;
}
/////////////////////////////////////////////////////////////////////////////
}




}