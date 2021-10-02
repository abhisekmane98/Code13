#include"1.h"
#include<iostream>

void complex::set_data(int a,int b)
{
	r=a;
	i=b;
	display();
}

void complex::display()
{
	std::cout<<r<<","<<i<<"\n";
}
