#include"40.h"
#include<iostream>

A::A(): p(0),q(0)                                       // O arg ctor
{
	std::cout<<"0 arg ctor\n";
		
}

A::A(int k1,int k2): p(k1),q(k2)                       // 2 arg ctor
{
	std::cout<<"2 arg ctor\n";
	
}

A::A(A &a)                                             // copy ctor
{
	std::cout<<"copy ctor\n";
	
	p=a.p;
	q=a.q;
	
}

A& A::operator=(A &a)                                   // `OVA`
{
	std::cout<<"overloade= operator\n";
	
	p=a.p;
	q=a.q;
	return *this;
	
}

A::~A()                                                 // Dctor
{
	std::cout<<"Dctor\n";
	
}

void A::display()
{
	std::cout<<p<<" "<<q<<"\n";
	
}


