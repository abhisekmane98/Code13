#include"48.h"
#include<iostream>

A::A()
{
	std::cout<<"A->ctor\n";
}
A::~A()
{
	std::cout<<"A->Dctor\n";
}

B::B()
{
	std::cout<<"B->ctor\n";
}
B::~B()
{
	std::cout<<"B->Dctor\n";
}
