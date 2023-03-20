#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main(int argc, char *argv[]){
  
  srand(time(0));

  int n = 2;
  int nEntries = 1000;
  int nBins = 50;
  double xMin = 0;
  double xMax = 1;
  int height = 30;
  const char* sign = argc>1 ? argv[1] : "|";

  if(argc > 2){
    nBins = atoi(argv[2]);
    if(argc > 3){
      height = atoi(argv[3]);
      if(argc > 4){
        xMin = atof(argv[4]);
        if(argc > 5){
          xMax = atof(argv[5]);
          if(argc > 6)
            n = atoi(argv[6]);
  } } } }

  int nBinsTotal = nBins+2;

  const double binWidth = (xMax-xMin)/nBins;
  int binContent[nBinsTotal];
  for(int i=0; i<nBinsTotal; ++i)
    binContent[i] = 0;

  double vals[nEntries];
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

  double average = sum/nEntries;
  double sumSqDiff = 0;
  for(double val: vals)
    sumSqDiff += (val-average)*(val-average);
  double stdDeviation = sqrt(sumSqDiff/(nEntries-1));

  std::cout << "\nWartosc srednia rozkladu = " << average << std::endl;
  std::cout << "Odchylenie standardowe rozkladu = " << stdDeviation << std::endl;

  return 0;
}