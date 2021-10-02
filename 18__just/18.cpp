#include"18.h"
#include<iostream>

Base::Base()
{
	a=0;
}
Base::Base(int k1)
{
	a=k1;
}
void Base::display_Base()
{
	std::cout<<a<<"\n";
}

Der::Der()
{
	b=1; c=(float)0.0; ch='a'; str[0]='\0';
}
Der::Der(int k1)
{
	b=k1;
}
void Der::display_Der()
{
	display_Base();
	std::cout<<b<<"k"<<c<<"k"<<ch<<"k"<<str<<"k\n";
}
void Der::display_b_Der()
{
	std::cout<<b<<"\n";
}
void Der::display_c_Der()
{
	std::cout<<c<<"\n";
}









