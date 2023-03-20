#include <iostream>
#include <time.h>
#include <cstdio>

using namespace std;


int main(int argc, char* argv[])
{
	srand(time(NULL));
	char texture='|';
	int b=50,h=20,N=2;
	float min=0, max=1;
	switch (argc)
	{
		case 7:N=atoi(argv[6]);
		case 6:max=atof(argv[5]);
		case 5:min=atof (argv[4]);
		case 4:h=atoi(argv[3]);
		case 3:b=atoi(argv[2]);
		case 2:texture=argv[1][0];
	}
	float* tab=new float[1000]{0};
	float* data=new float[b]{0};
	float h_max=0;
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<N;j++) tab[i]+=(float)rand()/RAND_MAX;
		tab[i]/=N;
		data[(int)((tab[i]-min)/(max-min)*b)]++;
	}
	delete[] tab;
	for(int i=0;i<b;i++)if(data[i]>h_max) h_max=data[i];
	float delta=h_max/(h+1);
	for(int i=0;i<b;i++)cout<<"-";
	cout<<endl;
	for(int i=h;i>=0;i--)
	{
		for(int j=0;j<b;j++) if(data[j]>delta*i)cout<<texture; else cout<<' ';
		cout<<"     "<<delta*i<<endl;
	}
	for(int i=0;i<b;i++)cout<<"-";
	cout<<endl;
	delete[] data;
	return 0;
}