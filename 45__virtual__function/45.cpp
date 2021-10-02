#include"45.h"
#include<iostream>

void A::f1()
{
	std::cout<<"A->f1\n";
}
void A::f2()
{
	std::cout<<"A->f2\n";
}

void B::f1()
{
	std::cout<<"B->f1\n";
}
void B::f2(int k)
{
	std::cout<<"B->f2\n";
}
