#include"38.h"
#include<iostream>

void A::set_value(int k1,int k2) 
{
	p=k1;
	q=k2;
}

void A::display()
{
	std::cout<<p<<" "<<q<<"\n";
}

A& A::return_reference()
{
	A a;
	a.set_value(11,13);
	std::cout<<"& static variable a "<<&a<<"\n";
	
	return a;
}
