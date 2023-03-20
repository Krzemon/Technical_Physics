#include <iostream>
#include "ProgressBar.h"
//#include <ctime>



void ProgressBar::loop(int a){
/*wypelnione pole*/
	for(int i=1; i<a; ++i){
		std::cout<<'>'<<std::flush; 
	}
/*puste pole*/
	for(int i=1; i<101-a; ++i){
		std::cout<<' '<<std::flush; 
	}

/*zakonczenie*/
	std::cout<<']'<<std::flush;
}


void ProgressBar::percent(int a){
	std::cout<<' '<<a<<'%'<<std::flush;
}

void ProgressBar::todo(const double g,double* pt,int j){
		(*pt)+=G/j;
}

char ProgressBar::back(){
	return '\b';
}



ProgressBar::ProgressBar(const double n){
	G = n;
	double* sum = new double;

	std::cout<<'['<<std::flush;

	for(int i=1; i<=100; ++i){
		loop(i);
		percent(i);
		todo(G,sum,i);
		//delay();
		for(int j=0; j<103; ++j){
			std::cout<<back();
		}
	}
	//std::cout<<"\nWynik operacjji: "<<*sum<<std::endl;

	delete sum;
}


	//void ProgressBar::refresh(double G){}

