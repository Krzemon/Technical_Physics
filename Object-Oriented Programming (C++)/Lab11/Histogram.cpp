#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include "Histogram.h"

Histogram::Histogram(){}

void Histogram::set_n(int a)
{
	n=a;
}
void Histogram::set_nBins(int a)
{
	nBins=a;
}
void Histogram::set_nEntries(int a)
{
	nEntries=a;
}
void Histogram::set_xMin(double a)
{
	xMin=a;
}
void Histogram::set_xMax(double a)
{
	xMax=a;
}
void Histogram::set_height(int a)
{
	height=a;
}
void Histogram::set_sign(const char* a)
{
	sign=a;
}
/////////////////////////////////////////////////////////////
void Histogram::print()
{
	int nBinsTotal = nBins+2;

  const double binWidth = (xMax-xMin)/nBins;
  ////int binContent[nBinsTotal]; 
	std::vector<int> binContent(nBinsTotal);
  for(int i=0; i<nBinsTotal; ++i)
    binContent[i] = 0;

 //// double vals[nEntries];  
 std::vector<double> vals(nEntries);
  double sum = 0;

  for(int i=0; i<nEntries; ++i){
    double xi = 0;
    for(int j=0; j<n; ++j) xi += rand()/double(RAND_MAX);
    xi /= n;
    vals[i] = xi;
    sum += xi;

    int bin;
    if(xi<xMin) bin = 0;
    else if(xi>=xMax) bin=nBinsTotal-1;
    else bin = (xi-xMin)/binWidth+1;

    ++binContent[bin];
  }

  double maxValue = 0;
  for(int val: binContent)
    if(val>maxValue) maxValue = val;

  const double rowHeight = maxValue/height;
  for(int i=height-1; i>=0; --i){
    for(int j=0; j<nBinsTotal; ++j){
      int binContentInRows = ((double)binContent[j]) / rowHeight;
      std::cout << (binContentInRows>i?sign:" ");
    }
    std::cout << " " << maxValue*(i+1)/height << std::endl;
  }
}
///////////////////////////////////////////////////

void Histogram::kwadrat()
{
	int nBinsTotal = nBins+2;

  const double binWidth = (xMax-xMin)/nBins;
  ////int binContent[nBinsTotal]; 
	std::vector<int> binContent(nBinsTotal);
  for(int i=0; i<nBinsTotal; ++i)
    binContent[i] = 0;

 //// double vals[nEntries];  
 std::vector<double> vals(nEntries);
  double sum = 0;

  for(int i=0; i<nEntries; ++i){
    double xi = 0;
    for(int j=0; j<n; ++j) xi += ((double)i*i-i)/1000;
    xi /= n;
    vals[i] = xi;
    sum += xi;

    int bin;
    if(xi<xMin) bin = 0;
    else if(xi>=xMax) bin=nBinsTotal-1;
    else bin = (xi-xMin)/binWidth+1;

    ++binContent[bin];
  }

  double maxValue = 0;
  for(int val: binContent)
    if(val>maxValue) maxValue = val;

  const double rowHeight = maxValue/height;
  for(int i=height-1; i>=0; --i){
    for(int j=0; j<nBinsTotal; ++j){
      int binContentInRows = ((double)binContent[j]) / rowHeight;
      std::cout << (binContentInRows>i?sign:" ");
    }
    std::cout << " " << maxValue*(i+1)/height << std::endl;
  }	
}
///////////////////////////////////////////////////

void Histogram::Exp()
{
	int nBinsTotal = nBins+2;

  const double binWidth = (xMax-xMin)/nBins;
  ////int binContent[nBinsTotal]; 
	std::vector<int> binContent(nBinsTotal);
  for(int i=0; i<nBinsTotal; ++i)
    binContent[i] = 0;

 //// double vals[nEntries];  
 std::vector<double> vals(nEntries);
  double sum = 0;

  for(int i=0; i<nEntries; ++i){
    double xi = 0;
    for(int j=0; j<n; ++j) xi += (exp(i));
    xi /= n;
    vals[i] = xi;
    sum += xi;

    int bin;
    if(xi<xMin) bin = 0;
    else if(xi>=xMax) bin=nBinsTotal-1;
    else bin = (xi-xMin)/binWidth+1;

    ++binContent[bin];
  }

  double maxValue = 0;
  for(int val: binContent)
    if(val>maxValue) maxValue = val;

  const double rowHeight = maxValue/height;
  for(int i=height-1; i>=0; --i){
    for(int j=0; j<nBinsTotal; ++j){
      int binContentInRows = ((double)binContent[j]) / rowHeight;
      std::cout << (binContentInRows>i?sign:" ");
    }
    std::cout << " " << maxValue*(i+1)/height << std::endl;
  }	
}
///////////////////////////////////////////////////

void Histogram::sinus()
{
	int nBinsTotal = nBins+2;

  const double binWidth = (xMax-xMin)/nBins;
  ////int binContent[nBinsTotal]; 
	std::vector<int> binContent(nBinsTotal);
  for(int i=0; i<nBinsTotal; ++i)
    binContent[i] = 0;

 //// double vals[nEntries];  
 std::vector<double> vals(nEntries);
  double sum = 0;

  for(int i=0; i<nEntries; ++i){
    double xi = 0;
    for(int j=0; j<n; ++j) xi += (sin(i));
    xi /= n;
    vals[i] = xi;
    sum += xi;

    int bin;
    if(xi<xMin) bin = 0;
    else if(xi>=xMax) bin=nBinsTotal-1;
    else bin = (xi-xMin)/binWidth+1;

    ++binContent[bin];
  }

  double maxValue = 0;
  for(int val: binContent)
    if(val>maxValue) maxValue = val;

  const double rowHeight = maxValue/height;
  for(int i=height-1; i>=0; --i){
    for(int j=0; j<nBinsTotal; ++j){
      int binContentInRows = ((double)binContent[j]) / rowHeight;
      std::cout << (binContentInRows>i?sign:" ");
    }
    std::cout << " " << maxValue*(i+1)/height << std::endl;
  }	
}