#include"24_4.h"
#include<iostream>

A::A(int k1): i(k1)   
{
	extern int x;
	std::cout<<&x<<" "<<x<<"\n";
	std::cout<<&k1<<" "<<k1<<"\n";
	std::cout<<&i<<" "<<i<<"\n";
	i=3;
	std::cout<<x<<" "<<k1<<" "<<i<<"\n";
}
