#include"10.h"
#include<iostream>

complex::complex()
{
	r=0; i=0;
}
complex::complex(int k1,int k2)
{
	r=k1; i=k2;
}
void complex::display()
{
	std::cout<<r<<" "<<i<<"\n";
}
void complex::fun(complex c)
{
	c.r=4;
	c.i=4;
	std::cout<<r<<" "<<i<<"\n"<<c.r<<" "<<c.i<<"\n";
}


