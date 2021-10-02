#include"24.h"
#include<iostream>

A::A(int k1):i(k1) 
{
	std::cout<<k1<<" "<<&k1<<"\n";
	std::cout<<i<<" "<<&i<<"\n";
}

void A::display()
{
	std::cout<<i<<"\n";
}
