#include"34.h"
#include<iostream>

A::A()
{
	std::cout<<"0 arg ctor\n";	
}
A::A(int k1)
{
	std::cout<<"1 arg ctor\n";
	p=k1;
}
A::A(A &a)
{
	std::cout<<"copy ctor\n";
	p=a.p;
}


A& A::sum(A a)
{
	static A temp;
	temp.p=p+a.p;
	return temp;	
} 
void A::display()
{
	std::cout<<p<<"\n";
}
