#include"23.h"
#include<iostream>

A::A()
{
	p=0; q=0;
}
A::A(int k1,int k2)
{
	p=k1; q=k2;
}
A::~A()
{
	std::cout<<this;
}
void A::display()
{
	std::cout<<p<<" "<<q<<"\n";
}

