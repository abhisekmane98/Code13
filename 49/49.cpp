#include"49.h"
#include<iostream>
#include<conio.h>

A::A()
{
	extern B b1;
	std::cout<<"A->ctor\n";
	A *p;
	p=&b1;
	p->fun();
}

void A::fun()
{
	std::cout<<"A->fun\n";
}

B::B()
{
	std::cout<<"B->ctor\n";
}

void B::fun()
{
	std::cout<<"B->fun\n";
}
