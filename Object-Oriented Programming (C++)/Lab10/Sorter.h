#include <iostream>
#include <algorithm>
#include "Complex.h"

template <class T>
class Sorter
{

private:
	T* point;
	int size;

public:
	Sorter(int a): size{a}
	{
		point = new T[size];
		std::cout<<"Konstruktor standardowy"<<std::endl;
	}

	Sorter(const Sorter<T>& a): size(a.size)// point{const new T[1]}
	{
		point = new const T[size];
		for(int i=0; i<size; i++)
		{
			point[i]=a.point[i];
		}
		std::cout<<"Konstruktor kopiujacy"<<std::endl;
	}

	Sorter(Sorter<T>&& a)
	{
		point=a.point;
		a.point=nullptr;
		size=a.size;
		a.size=0;
		std::cout<<"Konstruktor przenoszacy"<<std::endl;
	}

	~Sorter(){
		delete [] point;
	}

	void add(const std::initializer_list<T> &x)
	{
		int i{};
		for(auto v: x)
		{
			point[i++] = v;
		}
	}

	void sort()
	{
		std::sort(point, point+size);
	}

	template<>
	void print()
	{
		for(int i=0;i<size;i++)
		{
			std::cout<<point[i]<<" ";
		}
		std::cout<<std::endl;
	}

	template<Complex>
    void print()
    {
        for(int i=0; i<size; ++i)
        {
            std::cout<<point[i].re<<"+"<<point[i].im<<"i ";
        }
        std::cout<<std::endl;
    }

};
