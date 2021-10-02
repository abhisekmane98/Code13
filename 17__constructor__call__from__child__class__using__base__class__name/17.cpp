#include"17.h"
#include<iostream>

A::A()
{
	std::cout<<"constructor A\n";
}
A::A(int k)
{
	std::cout<<"constructor A(int)\n";
	a=k;
}
void A::fun1()
{
	std::cout<<"fun1\n";
	A();
}


B::B()
{
	std::cout<<"constructor B\n";
}
B::B(int k)
{
	std::cout<<"constructor B(int)\n";
	b=k;
}
void B::fun2()
{
	std::cout<<"fun2\n";
}
