#include"13.h"
#include<iostream>

A::A()
{
	a=0; b=0;
}
void A::set_data(int k1,int k2)
{
	a=k1;
	b=k2;
}
int A::sum()
{
	return (a+b);
}
void A::display()
{
	std::cout<<a<<" "<<b<<"\n";
}
B::B()
{
	c=0; d=0;
}

